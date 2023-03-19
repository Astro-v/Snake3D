CXX           = g++

ifeq ($(DEBUG),yes)
	CXXFLAGS  = -Wall -ansi -g -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network -lsfml-audio
	LDFLAGS   = -g -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network -lsfml-audio
else
	CXXFLAGS  = -Wall -ansi -std=c++11 -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network -lsfml-audio
	LDFLAGS   = -lsfml-graphics -lsfml-window -lsfml-system -lsfml-network -lsfml-audio 
endif

DIR_EXEC      = ./
DIR_SRC       = ../../src/
DIR_OBJ       = ../../out/obj/

LIB           = -L../../lib/
INCLUDE       = -I../../include/ -I../../include/SFML 

EXEC          = test.exe
SRC           = $(notdir $(wildcard $(DIR_SRC)*.cxx))
OBJ           = $(SRC:.cxx=.o)
DIR_OBJS      = $(addprefix $(DIR_OBJ), $(OBJ))

HEADER 		  = include/*.hxx 

all : $(DIR_EXEC)$(EXEC)

$(DIR_EXEC)$(EXEC) : $(DIR_OBJS)
	$(CXX) -o $@ $^ $(LIB) $(LDFLAGS) 

$(DIR_OBJ)%.o : $(DIR_SRC)%.cxx $(HEADER)
	$(CXX) -o $@ -c $< $(INCLUDE) $(CXXFLAGS)


.PHONY: clean mrproper
clean :
	rm -f $(DIR_OBJ)*
mrproper: clean
	rm -f *~ $(DIR_EXEC)$(EXEC)