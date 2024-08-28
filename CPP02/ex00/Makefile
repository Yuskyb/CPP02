CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

TARGET = main

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDES = -I ./includes

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCLUDES) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all