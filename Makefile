#SRCS is a whitespace-separated list of source files
SRCS = visible_object.cpp dodd_window.cpp player.cpp game.cpp main.cpp

#These are the paths on my system. You may need to change them
INCLUDE_PATHS = -IC:\win-builds\include\SDL2
LIB_PATHS = -LC:\win-builds\lib64

#CXX is compiler (and assembler and linker)
CXX = g++

#CPPFLAGS - additional compilation options
# -w supresses all warnings, you may find that you want to add this
# -Wl,-subsystem,windows tells the linker to get rid of the console window
# -Wall (-Wall of text) show me ALL the warnings
CPPFLAGS = -Wall

#LFLAGS libraries to link against. Note we set up for dynamic linking to SDL2. You'll need the .dll
CXXFLAGS = -Wl,-subsystem,windows -lmingw32 -lSDL2main -lSDL2.dll

EXE = bin\sdl-test.exe

OBJS = $(SRCS:.cpp=.o)

all : $(SRCS) $(EXE)

$(EXE): $(OBJS)
	$(CXX) $(LIB_PATHS) $(OBJS) $(CPPFLAGS) $(CXXFLAGS) -o $@

*.o: *.cpp
	$(CXX) $(CPPFLAGS) -c $@
