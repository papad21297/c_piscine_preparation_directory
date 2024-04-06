CFLAGS = -Wextra -Werror

fnl: main.o ft_print_memory.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_print_memory.o -o fnl
	@chmod +x fnl

ft_print_memory.o: ex12/ft_print_memory.c
	@echo "Compiling the ft_print_memory.c file"
	gcc $(CFLAGS) -c ex12/ft_print_memory.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_print_memory.o fnl
