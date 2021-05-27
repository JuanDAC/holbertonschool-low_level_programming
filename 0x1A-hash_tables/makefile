target := hash_tables
cflags := -g -std=gnu90 -Wall -pedantic -Werror -Wextra
main := 0-main.c
files := 0-hash_table_create.c

build:
	@gcc $(cflags) ./test/$(main) $(files) -o $(target)

run:
	@gcc $(cflags) ./test/$(main) $(files) -o $(target)
	@./$(target)
	@rm -f ./$(target)

gdb:
	@gcc $(cflags) ./test/$(main) $(files) -o $(target)
	@gdb ./$(target)
	@rm -f ./$(target)

valgrind:
	@gcc $(cflags) ./test/$(main) $(files) -o $(target)
	@valgrind ./$(target)
	@rm -f ./$(target)
