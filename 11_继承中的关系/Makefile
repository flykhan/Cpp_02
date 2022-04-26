# 获取目录下的所有 .cpp 文件列表
OBJ := $(wildcard *cpp)

# 以 .cpp 文件作为依赖,编译出 main 的可执行文件
main:$(OBJ)
	g++ $(OBJ) -o $@ -std=c++11
clean:
	rm -rf *.o main