SOURCE_OBJECT = -shared -fPIC

all: libdist.so libwanjun.so libpycall.so
	mv $^ ../so

libdist.so:
	g++ -o $@ $(SOURCE_OBJECT) dist.cpp

libwanjun.so:
	g++ -o $@ $(SOURCE_OBJECT) wanjun.cpp

libpycall.so:
	g++ -o $@ $(SOURCE_OBJECT) pycall.cpp

.PHONT: clean start
clean:
	rm -rf ../so/*.so

start:
	python3 call.py

# 静态库的使用方法
# g++ -c StaticMath.cpp
# ar -crv libstaticmath.a StaticMath.o

# g++ TestStaticLibrary.cpp -L../StaticLibrary -lstaticmat
#  -L：表示要连接的库所在目录
#  -l：指定链接时需要的库，编译器查找连接库时有隐含的命名规则，即在给出的名字前面加上lib，后面加上.a或.so来确定库的名称。