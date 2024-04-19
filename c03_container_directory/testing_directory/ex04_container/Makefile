CFLAGS = -Wextra -Werror

fnl: main.o ft_strstr.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strstr.o -o fnl
	@chmod +x fnl

ft_strstr.o: ex04/ft_strstr.c
	@echo "Compiling the ft_strstr.c file"
	gcc $(CFLAGS) -c ex04/ft_strstr.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strstr.o fnl
