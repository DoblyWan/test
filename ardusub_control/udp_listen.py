import socket

def udp_listener(host='127.0.0.1', port=14550, allowed_src_port=12345):
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.bind((host, port))
    
    print(f"Listening on {host}:{port}, only accepting from port {allowed_src_port}...")
    
    try:
        while True:
            data, addr = sock.recvfrom(4096)  # addr = (ip, port)
            src_ip, src_port = addr
            
            if src_port == allowed_src_port:
                # print(f"Accepted from {addr}: {data.decode('utf-8', errors='replace')}")
                print(f"Accepted from {addr}: {data}")

            else:
                # print(f"Ignored message from unauthorized port: {addr}")
                1
    except KeyboardInterrupt:
        print("\nListener stopped.")
    finally:
        sock.close()

if __name__ == "__main__":
    udp_listener(port=14540, allowed_src_port=14550)  # 只接受来自 8888 的数据