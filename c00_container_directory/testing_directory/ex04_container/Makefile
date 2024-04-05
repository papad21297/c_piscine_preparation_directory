CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_is_negative.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_is_negative.o -o fnl
	@chmod +x fnl

ft_is_negative.o: ex04/ft_is_negative.c
	@echo "Compiling the ft_is_negative.c file"
	gcc $(CFLAGS) -c ex04/ft_is_negative.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_is_negative.o fnl
