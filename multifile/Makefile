CFLAGS 		=	 	-Wall
OBJFILES 	= 	one.o main.o
TARGET 		= 	main

all: $(TARGET)

$(TARGET): $(OBJFILES)
	cc $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)
	rm -f $(OBJFILES)


clean:
	rm -f $(OBJFILES) $(TARGET)
