P = /home/globik/rawrtc/build/prefix
INC = -I $(P)/include
#LIBI = -L$(P)/lib -lusrsctp
LIBI = -L /usr/local/lib -lusrsctp
DEF = -D_GNU_SOURCE -std=c99 -DINET=1 -DINET6=1 -DSCTP_DEBUG=1 -DHAVE_SOCKET=1-DHAVE_INET_ADDR=1 -DHAVE_SYS_QUEUE_H=1 \
-DHAVE_LINUX_IF_ADDR_H=1 -DHAVE_LINUX_RTNETLINK_H=1 -DHAVE_NETINET_IP_ICMP_H=1 
#-DSCTP_DEBUG=1 -DINET=1 -DINET6=1-DHAVE_SOCKET=1-DHAVE_INET_ADDR=1 -DHAVE_SYS_QUEUE_H=1 -DHAVE_LINUX_IF_ADDR_H=1 -DHAVE_LINUX_RTNETLINK_H=1-DHAVE_NETINET_IP_ICMP_H=1 
# client_upcall + discard_server_upcall
# client + discard_server
# server=> ./rtcweb 2000 3000 9 + client => ./rtcweb 3000 2000 127.0.0.1 9
a: echo_server_upcall.c
	gcc  $(INC) $(DEF) -o a echo_server_upcall.c $(LIBI) -pthread
b: client_upcall.c
	gcc $(INC) $(DEF) -o b client_upcall.c $(LIBI) -pthread
c: discard_server.c 
	gcc $(INC) $(DEF) -o c discard_server.c $(LIBI) -pthread
client: client.c
	gcc $(INC) $(DEF) -o client client.c $(LIBI) -pthread
dis: discard_server_upcall.c
	gcc $(INC) $(DEF) -o dis discard_server_upcall.c $(LIBI) -pthread
