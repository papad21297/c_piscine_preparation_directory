CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_swap.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_swap.o -o fnl
	@chmod +x fnl

ft_swap.o: ex02/ft_swap.c
	@echo "Compiling the ft_swap.c file"
	gcc $(CFLAGS) -c ex02/ft_swap.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_swap.o fnl
