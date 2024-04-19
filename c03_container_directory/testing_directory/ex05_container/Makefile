CFLAGS = -Wextra -Werror

fnl: main.o ft_strlcat.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strlcat.o -o fnl -lbsd
	@chmod +x fnl

ft_strlcat.o: ex05/ft_strlcat.c
	@echo "Compiling the ft_strlcat.c file"
	gcc $(CFLAGS) -c -lbsd ex05/ft_strlcat.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c -lbsd main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strlcat.o fnl
