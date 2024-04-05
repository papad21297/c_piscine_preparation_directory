CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_strlcpy.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strlcpy.o -o fnl
	@chmod +x fnl

ft_strlcpy.o: ex10/ft_strlcpy.c
	@echo "Compiling the ft_strlcpy.c file"
	gcc $(CFLAGS) -c ex10/ft_strlcpy.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strlcpy.o fnl
