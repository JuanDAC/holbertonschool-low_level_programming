TARGET := hash_tables
CFLAGS := -g -std=gnu90 -Wall -pedantic -Werror -Wextra
MAIN := 0-main.c
DMAIN := ./test/
FILES := *.c

betty:
	@betty $(FILES)

build:
	@betty $(FILES) \
	&& gcc $(CFLAGS) $(DMAIN)$(MAIN) $(FILES) -o $(TARGET)

run:
	@betty $(FILES) \
	&& gcc $(CFLAGS) $(DMAIN)$(MAIN) $(FILES) -o $(TARGET) \
	&& ./$(TARGET) \
	&& rm -f ./$(TARGET)

gdb:
	@betty $(FILES) \
	&& gcc $(CFLAGS) $(DMAIN)$(MAIN) $(FILES) -o $(TARGET) \
	&& gdb ./$(TARGET) \
	&& rm -f $(TARGET)

valgrind:
	@betty $(FILES) 
	&& gcc $(CFLAGS) $(DMAIN)$(MAIN) $(FILES) -o $(TARGET) \
	&& valgrind ./$(TARGET) \
	&& rm -f ./$(TARGET)
