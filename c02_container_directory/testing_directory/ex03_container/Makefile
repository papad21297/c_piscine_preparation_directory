CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_str_is_numeric.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_str_is_numeric.o -o fnl
	@chmod +x fnl

ft_str_is_numeric.o: ex03/ft_str_is_numeric.c
	@echo "Compiling the ft_str_is_numeric.c file"
	gcc $(CFLAGS) -c ex03/ft_str_is_numeric.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_str_is_numeric.o fnl
