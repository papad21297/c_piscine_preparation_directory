CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_strncpy.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strncpy.o -o fnl
	@chmod +x fnl

ft_strncpy.o: ex01/ft_strncpy.c
	@echo "Compiling the ft_strncpy.c file"
	gcc $(CFLAGS) -c ex01/ft_strncpy.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strncpy.o fnl
