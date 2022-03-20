cc = c++ -std=c++98
FLAGS = -Wall -Wextra -Werror
name = std
name3 = ft


all: main.cpp

$(name): main.cpp
	$(cc) -D CHANGE=1 main.cpp -o $(name)
$(name3): main.cpp
	$(cc) -D CHANGE=0 main.cpp -o $(name3)
clean:
	@echo "no .a"

fclean:
	rm -rf $(name)
	rm -rf $(name3)