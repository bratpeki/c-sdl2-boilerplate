CC=gcc -std=c99
C=$(shell find . -name "*.c")
OUT=main.out
LNK=-lSDL2

build:
	@$(CC) -o $(OUT) $(C) $(LNK) -Wall

clean:
	@if [ -f $(OUT) ]; then rm $(OUT); fi

dbuild:
	@$(CC) -o $(OUT) $(C) $(LNK) -Wall -g

exec:
	@./$(OUT)
