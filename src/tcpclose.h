
typedef struct tcp_con{
	int local_ip;
	short local_port;
	int remote_ip;
	short remote_port;
}TCP_CONN;

int tcpclose(TCP_CONN *ptcp);
