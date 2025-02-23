all:
	gcc -o main main.c player.c -lraylib -lm -lpthread -ldl -lrt -lX11
