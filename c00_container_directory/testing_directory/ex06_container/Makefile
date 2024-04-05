CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_print_comb2.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_print_comb2.o -o fnl
	@chmod +x fnl

ft_print_comb2.o: ex06/ft_print_comb2.c
	@echo "Compiling the ft_print_comb2.c file"
	gcc $(CFLAGS) -c ex06/ft_print_comb2.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_print_comb2.o fnl
