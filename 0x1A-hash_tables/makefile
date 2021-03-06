NAME := hash_tables
CC := gcc
DEBUGGER := gdb
LEAK_CHECK:= valgrind
CFLAGS := -g -std=gnu90 -Wall -pedantic -Werror -Wextra
VFLAGS := --leak-check=full
MAIN := 0-main.c
DMAIN := ./test/
SRC := *.c
RM=rm

betty:
	@betty $(SRC)

build:
	@betty $(SRC) \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -o $(NAME)

run:
	@betty $(SRC) \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -o $(NAME) \
	&& ./$(NAME) \
	&& $(RM) -f ./$(NAME)

gdb:
	@betty $(SRC) \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -o $(NAME) \
	&& $(DEBUGGER) ./$(NAME) \
	&& $(RM) -f $(NAME)

valgrind:
	@betty $(SRC) \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -o $(NAME) \
	&& $(LEAK_CHECK) $(VFLAGS) ./$(NAME) \
	&& $(RM) -f ./$(NAME)
