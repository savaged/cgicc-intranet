CXXFLAGS:= -g -Wall -Wextra -Werror
TARGET:= index.cgi
OBJDIR:= obj/
OBJ:= $(OBJDIR)main.o

$(TARGET): $(OBJ)
	g++ $(CXXFLAGS) -o $(TARGET) $< -lcgicc

$(OBJ): src/main.cpp
	g++ $(CXXFLAGS) -c $< -o $@

clean:
	rm $(TARGET) $(OBJ)

install: 
	cp $(TARGET) /usr/lib/cgi-bin

uninstall: 
	rm /usr/lib/cgi-bin/$(TARGET)
