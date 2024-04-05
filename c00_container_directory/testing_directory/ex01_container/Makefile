CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_print_alphabet.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_print_alphabet.o -o fnl
	@chmod +x fnl

ft_print_alphabet.o: ex01/ft_print_alphabet.c
	@echo "Compiling the ft_print_alphabet.c file"
	gcc $(CFLAGS) -c ex01/ft_print_alphabet.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_print_alphabet.o fnl
