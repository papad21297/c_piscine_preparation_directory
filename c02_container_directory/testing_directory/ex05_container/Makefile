CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_str_is_uppercase.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_str_is_uppercase.o -o fnl
	@chmod +x fnl

ft_str_is_uppercase.o: ex05/ft_str_is_uppercase.c
	@echo "Compiling the ft_str_is_uppercase.c file"
	gcc $(CFLAGS) -c ex05/ft_str_is_uppercase.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_str_is_uppercase.o fnl
