CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_rev_int_tab.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_rev_int_tab.o -o fnl
	@chmod +x fnl

ft_rev_int_tab.o: ex07/ft_rev_int_tab.c
	@echo "Compiling the ft_rev_int_tab.c file"
	gcc $(CFLAGS) -c ex07/ft_rev_int_tab.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_rev_int_tab.o fnl
