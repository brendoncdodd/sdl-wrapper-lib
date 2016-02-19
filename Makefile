#Copyright (C) {2016}  {Dodd, Brendon Charles}
#
#This program is free software: you can redistribute it and/or modify
#it under the terms of the GNU General Public License as published by
#the Free Software Foundation, version 3 of the License.
#
#This program is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.
#
#You should have received a copy of the GNU General Public License
#along with this program.  If not, see <http://www.gnu.org/licenses/>.


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
CPPFLAGS = -Wall -std=c++11

#LFLAGS libraries to link against. Note we set up for dynamic linking to SDL2. You'll need the .dll
CXXFLAGS = -Wl,-subsystem,windows -lmingw32 -lSDL2main -lSDL2.dll

EXE = bin\sdl-test.exe

OBJS = $(SRCS:.cpp=.o)

all : $(SRCS) $(EXE)

$(EXE): $(OBJS)
	$(CXX) $(LIB_PATHS) $(OBJS) $(CPPFLAGS) $(CXXFLAGS) -o $@

*.o: *.cpp
	$(CXX) $(CPPFLAGS) -c $@
