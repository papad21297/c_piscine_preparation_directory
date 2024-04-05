CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_putnbr.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_putnbr.o -o fnl
	@chmod +x fnl

ft_putnbr.o: ex07/ft_putnbr.c
	@echo "Compiling the ft_putnbr.c file"
	gcc $(CFLAGS) -c ex07/ft_putnbr.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_putnbr.o fnl
