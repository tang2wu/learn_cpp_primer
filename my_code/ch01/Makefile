# 设置编译器为clang++
CC = clang++
# 设置编译选项，包括C++17标准和必要的include路径
CFLAGS = -std=c++17 -I/Library/Developer/CommandLineTools/SDKs/MacOSX15.0.sdk/usr/include/c++/v1

# 'all'是默认目标，当只输入'make'时会执行此目标
# 这里表示'all'依赖于'main'，所以执行'make'或'make all'时会构建'main'目标
all: main

# 'main'目标依赖于main.cpp文件
# 当main.cpp更新时，下面的命令会被执行以重新生成main可执行文件
main: main.cpp
	$(CC) $(CFLAGS) -o main main.cpp

# 'clean'目标用于清理编译产物
clean:
	rm -f main

# 'run'目标依赖于'main'，确保在运行前main是最新的
# 如果main需要重新编译，会先执行main目标再执行./main命令
run: main
	./main

# .PHONY声明哪些目标不是实际文件名
# 这确保即使存在同名文件，这些目标的命令也会被执行
# 例如：如果有一个名为'clean'的文件，不使用.PHONY时'make clean'可能不执行清理命令
# 注意：'main'不在.PHONY中，因为它的目的是创建一个实际的main文件
# 如果将main加入.PHONY，make会总是执行编译命令，即使源文件没有变化
# 但如果担心目录中已有同名文件，可以将main也加入.PHONY: .PHONY: all clean run main
.PHONY: all clean run 