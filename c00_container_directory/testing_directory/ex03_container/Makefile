CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_print_numbers.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_print_numbers.o -o fnl
	@chmod +x fnl

ft_print_numbers.o: ex03/ft_print_numbers.c
	@echo "Compiling the ft_print_numbers.c file"
	gcc $(CFLAGS) -c ex03/ft_print_numbers.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_print_numbers.o fnl
