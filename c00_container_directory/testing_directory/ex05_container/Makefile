CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_print_comb.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_print_comb.o -o fnl
	@chmod +x fnl

ft_print_comb.o: ex05/ft_print_comb.c
	@echo "Compiling the ft_print_comb.c file"
	gcc $(CFLAGS) -c ex05/ft_print_comb.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_print_comb.o fnl
