CFLAGS = -Wextra -Werror

fnl: main.o ft_strncat.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strncat.o -o fnl
	@chmod +x fnl

ft_strncat.o: ex03/ft_strncat.c
	@echo "Compiling the ft_strncat.c file"
	gcc $(CFLAGS) -c ex03/ft_strncat.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strncat.o fnl
