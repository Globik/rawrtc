# /home/globik/fork/rawrtc/my-tools
# /home/globik/rawrtc/src/tools/helper
# /home/globik/rawrtc/build/prefix/lib/engines-1.1
DEF = -D_GNU_SOURCE -DPTHREAD_BARRIER_SERIAL_THREAD -DHAVE_GAI_STRERROR -DINET=1 -DINET6=1
LUVINC=-I/usr/local/include
HELP = -L /home/globik/rawrtc/build/src/tools/helper -lrawrtc-helper
COM = /home/globik/rawrtc/build/src/tools/helper/CMakeFiles/rawrtc-helper.dir
UTILS = $(COM)/common.c.o $(COM)/utils.c.o $(COM)/parameters.c.o $(COM)/handler.c.o
ENGINE = /home/globik/rawrtc/build/prefix/lib/engines-1.1
#FENG = -L $(ENGINE)/capi.so -L $(ENGINE)/padlock.so
HELPER = /home/globik/rawrtc/src/tools
PA = /home/globik/rawrtc/build/prefix
INC =  -I $(PA)/include -I $(PA)/include/re -I $(PA)/include/rew -I $(HELPER)
LIBI = -L$(PA)/lib -lusrsctp -lre -lrew -lcrypto -lssl -pthread -lrew -Wl,-rpath $(PA)/lib -L $(PA)/lib -lrawrtc -luv
a: peer-connection.c
	gcc   $(DEF) $(INC) -o peer-connection peer-connection.c $(HELP) $(LIBI) 
