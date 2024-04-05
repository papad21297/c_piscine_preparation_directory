CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_str_is_alpha.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_str_is_alpha.o -o fnl
	@chmod +x fnl

ft_str_is_alpha.o: ex02/ft_str_is_alpha.c
	@echo "Compiling the ft_str_is_alpha.c file"
	gcc $(CFLAGS) -c ex02/ft_str_is_alpha.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_str_is_alpha.o fnl
