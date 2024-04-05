CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_print_combn.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_print_combn.o -o fnl
	@chmod +x fnl

ft_print_combn.o: ex08/ft_print_combn.c
	@echo "Compiling the ft_print_combn.c file"
	gcc $(CFLAGS) -c ex08/ft_print_combn.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_print_combn.o fnl
