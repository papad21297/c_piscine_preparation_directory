CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_strcpy.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strcpy.o -o fnl
	@chmod +x fnl

ft_strcpy.o: ex00/ft_strcpy.c
	@echo "Compiling the ft_strcpy.c file"
	gcc $(CFLAGS) -c ex00/ft_strcpy.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strcpy.o fnl
