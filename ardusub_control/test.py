#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# "头文件"部分（Python中的模块导入）

import sys
import os
import socket
import threading
# import control_ardusub
import time
from pymavlink import mavutil

import test1

import math
from pymavlink.quaternion import QuaternionBase
# from typing import Union, Iterable


from typing import Union, Iterable

import time

# 主函数定义
def main():
    """
    这是一个简单的Hello World程序
    """
    print("Hello, World!")  # 输出Hello World
    print(f"Python版本: {sys.version}")  # 使用sys模块
    print(f"当前工作目录: {os.getcwd()}")  # 使用os模块

# Python的标准主程序入口
if __name__ == "__main__":
    main()