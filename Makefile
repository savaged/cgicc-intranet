CXXFLAGS:= -g -Wall -Wextra -Werror
TARGET:= index.cgi
OBJDIR:= obj/
SRCDIR:= src/
INCDIR:= include/
OBJ:= $(OBJDIR)main.o $(OBJDIR)HtmlDoc.o

$(TARGET): $(OBJ)
	g++ $(CXXFLAGS) -o $(TARGET) $^ -lcgicc

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	g++ $(CXXFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	rm -f $(TARGET)
	rm -f $(OBJDIR)*.o

install: 
	cp $(TARGET) /usr/lib/cgi-bin

uninstall: 
	rm /usr/lib/cgi-bin/$(TARGET)
