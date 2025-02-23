all:
	gcc -o main main.c player.c -I res -lraylib -lm -lpthread -ldl -lrt -lX11
