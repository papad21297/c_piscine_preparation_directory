CFLAGS = -Wextra -Werror

fnl: main.o ft_putnbr_base.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_putnbr_base.o -o fnl
	@chmod +x fnl

ft_putnbr_base.o: ex04/ft_putnbr_base.c
	@echo "Compiling the ft_putnbr_base.c file"
	gcc $(CFLAGS) -c ex04/ft_putnbr_base.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_putnbr_base.o fnl
