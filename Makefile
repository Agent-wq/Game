all:
	gcc -o main main.c -lraylib -lm -lpthread -ldl -lrt -lX11
