CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_strlen.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strlen.o -o fnl
	@chmod +x fnl

ft_strlen.o: ex06/ft_strlen.c
	@echo "Compiling the ft_strlen.c file"
	gcc $(CFLAGS) -c ex06/ft_strlen.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strlen.o fnl
