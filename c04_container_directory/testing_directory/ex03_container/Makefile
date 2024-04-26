CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_atoi.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_atoi.o -o fnl
	@chmod +x fnl

ft_atoi.o: ex03/ft_atoi.c
	@echo "Compiling the ft_atoi.c file"
	gcc $(CFLAGS) -c ex03/ft_atoi.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_atoi.o fnl
