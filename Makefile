#Name: Joseph Dunagan
#ASU ID: 1223251280

OBJS = IS.o MS.o QS.o
CPPS = main.cpp IS.cpp MS.cpp QS.cpp

#____________________________

CLASSFILES = IS.h IS.cpp MS.h MS.cpp QS.h QS.cpp

DEBUG = -g
CFLAGS = -Wall -c 
LFLAGS = -Wall $(DEBUG)
WALL = -Wall


PJ1: $(OBJS) 
	g++ $(WALL) $(CPPS) -o PJ1
	
class.o: $(CLASSFILES)
	g++ $(CFLAGS) class.cpp
	
clean:
	\rm *.o *~ PJ1