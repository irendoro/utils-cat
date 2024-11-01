CC = gcc
FLAGS = -Wall -Werror -Wextra -std=c11

all: build

build: s21_cat

s21_cat: part1.c
	$(CC) $(FLAGS) part1.c part1.h -o s21_cat

clean:
	rm -rf s21_cat
