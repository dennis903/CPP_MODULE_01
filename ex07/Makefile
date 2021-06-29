CC = clang++
CFLAGS = -Wall -Wextra -Werror
TARGET = ex07

OBJS = ex07.cpp

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean :
	rm -rf $(TARGET)

fclean : clean
	rm -rf $(TARGET)

re : clean all%