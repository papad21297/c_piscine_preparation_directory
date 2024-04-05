CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_print_reverse_alphabet.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_print_reverse_alphabet.o -o fnl
	@chmod +x fnl

ft_print_reverse_alphabet.o: ex02/ft_print_reverse_alphabet.c
	@echo "Compiling the ft_print_reverse_alphabet.c file"
	gcc $(CFLAGS) -c ex02/ft_print_reverse_alphabet.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_print_reverse_alphabet.o fnl
