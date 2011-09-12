RM=/bin/rm

# compiler/linker
CC = /usr/bin/gcc

# compiler/linker options
INCLUDE    = -I. -I /usr/local/include -I ../
LIBRARIES  = -L /usr/local/lib
C_FLAGS    = -Wall -Werror
L_FLAGS    = -levent -lpthread
CC_INCLUDE = $(INCLUDE)


CONSOLE_SAMPLE_BIN  = console_sample
SYSLOG_SAMPLE_BIN = server_sample

SAMPLE_SRC  = sample.c

all: $(CONSOLE_SAMPLE_BIN) $(SYSLOG_SAMPLE_BIN)

$(CONSOLE_SAMPLE_BIN) :
	$(CC) $(C_FLAGS) -DDPRINT_CONSOLE $(CC_INCLUDE) -g $(SAMPLE_SRC) \
	      $(LIBRARIES) $(L_FLAGS) -o $(CONSOLE_SAMPLE_BIN)

$(SYSLOG_SAMPLE_BIN) :
	$(CC) $(C_FLAGS) -DDPRINT_SYSLOG $(CC_INCLUDE) -g $(SAMPLE_SRC) \
	      $(LIBRARIES) $(L_FLAGS) -o $(SYSLOG_SAMPLE_BIN)

clean:
	$(RM) -f $(CONSOLE_SAMPLE_BIN)
	$(RM) -f $(SYSLOG_SAMPLE_BIN)