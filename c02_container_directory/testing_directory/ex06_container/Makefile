CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_str_is_printable.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_str_is_printable.o -o fnl
	@chmod +x fnl

ft_str_is_printable.o: ex06/ft_str_is_printable.c
	@echo "Compiling the ft_str_is_printable.c file"
	gcc $(CFLAGS) -c ex06/ft_str_is_printable.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_str_is_printable.o fnl
