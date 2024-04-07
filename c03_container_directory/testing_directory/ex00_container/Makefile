CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_strcmp.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strcmp.o -o fnl
	@chmod +x fnl

ft_strcmp.o: ex00/ft_strcmp.c
	@echo "Compiling the ft_strcmp.c file"
	gcc $(CFLAGS) -c ex00/ft_strcmp.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strcmp.o fnl
