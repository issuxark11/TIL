CC = g++ 
MAKE = make
TARGET = analysis
LDFLAGS = -L./lib \
		-L../libs 
CPPFLAGS += -MMD -O2 -Wall -Werror -std=c++0x -lpthread
DEBUG = -g

INC_DIRS = -I./ \
	   -I./common \
	   -I./include \
	   -Iheaders

ifeq ($(DEBUG),YES)
	DEBUG_FLAG = -g -DDEBUG  
	DEBUG_SET = YES 
else
	DEBUG_FLAG = -g  
	DEBUG_SET = 
endif	

SOURCES := $(wildcard *.C *.c *.cpp *.cxx *.c++)
OBJECTS := $(addsuffix .o,$(basename $(SOURCES)))
DEPS := $(OBJECTS:.o=.d)

.PHONY: all
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) -lrt -llog4cpp 

clean:
	-rm -rf $(OBJECTS) $(TARGET) *.d

-include $(DEPS)
