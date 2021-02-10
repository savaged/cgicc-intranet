TARGET:= index.cgi
OBJ:= main.o
SRC:= src/main.cpp

$(TARGET): $(OBJ)
	g++ -o $(TARGET) $< -lcgicc

$(OBJ): $(SRC)
	g++ -c $(SRC)

clean:
	rm $(TARGET) $(OBJ)

install: 
	cp $(TARGET) /usr/lib/cgi-bin

uninstall: 
	rm /usr/lib/cgi-bin/$(TARGET)
