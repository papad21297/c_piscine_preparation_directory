CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_putstr.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_putstr.o -o fnl
	@chmod +x fnl

ft_putstr.o: ex05/ft_putstr.c
	@echo "Compiling the ft_putstr.c file"
	gcc $(CFLAGS) -c ex05/ft_putstr.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_putstr.o fnl
