CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_putchar.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_putchar.o -o fnl
	@chmod +x fnl

ft_putchar.o: ex00/ft_putchar.c
	@echo "Compiling the ft_putchar file"
	gcc $(CFLAGS) -c ex00/ft_putchar.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_putchar.o fnl
