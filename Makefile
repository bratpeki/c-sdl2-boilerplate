
CC=gcc -std=c99
C=$(shell find . -name "*.c")
OUT=main.out
LNK=-lSDL2

build:
	@$(CC) -o $(OUT) $(C) $(LNK) -Wall

dbuild:
	@$(CC) -o $(OUT) $(C) $(LNK) -Wall -g

clean:
	@if [ -f $(OUT) ]; then rm $(OUT); fi

exec:
	@./$(OUT)

