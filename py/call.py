import platform
from ctypes import *

if platform.system() == 'Linux':
    libwanjun = cdll.LoadLibrary('../so/libwanjun.so')

libsum = libwanjun.sum
libsum.argtypes = [c_int,c_int]
libsum.restype = c_int
res = libsum(12,13)
print('res is ',res)

name = "liubei"
getName = libwanjun.getName
getName.argtypes = [c_char_p]
getName.restype = c_char_p
res = getName(name.encode()).decode()
# res = getName(name.encode("utf-8")).decode("utf-8")

print("res type is ",type(res))
print("res name:")
print(res)