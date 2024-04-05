CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_putstr_non_printable.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_putstr_non_printable.o -o fnl
	@chmod +x fnl

ft_putstr_non_printable.o: ex11/ft_putstr_non_printable.c
	@echo "Compiling the ft_putstr_non_printable.c file"
	gcc $(CFLAGS) -c ex11/ft_putstr_non_printable.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_putstr_non_printable.o fnl
