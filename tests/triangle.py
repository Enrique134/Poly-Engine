from ctypes import *

polyengine = CDLL("../bin/src/libPolyEngineLib.dll")

program_return = polyengine.poly_initialize()
print(program_return)

input()