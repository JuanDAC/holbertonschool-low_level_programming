NAME := SearchAlgorithms
CC := gcc
DEBUGGER := gdb
LEAK_CHECK:= valgrind
CFLAGS := -g -Wall -Werror -Wextra -pedantic -std=gnu89
VFLAGS := --leak-check=full
MAIN := 0-main.c
DMAIN := ./tests/
SRC := *.c
RM=rm

betty:
	@betty $(SRC) \
	&& betty *.h

build:
	@betty $(SRC) \
	&& betty *.h  \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -lm -o $(NAME)

run:
	@betty $(SRC) \
	&& betty *.h \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -lm -o $(NAME) \
	&& ./$(NAME) \
	&& $(RM) -f ./$(NAME)

gdb:
	@betty $(SRC) \
	&& betty *.h \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -lm -o $(NAME) \
	&& $(DEBUGGER) ./$(NAME) \
	&& $(RM) -f $(NAME)

valgrind:
	@betty $(SRC) \
	&& betty *.h \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -lm -o $(NAME) \
	&& $(LEAK_CHECK) $(VFLAGS) ./$(NAME) \
	&& $(RM) -f ./$(NAME)
