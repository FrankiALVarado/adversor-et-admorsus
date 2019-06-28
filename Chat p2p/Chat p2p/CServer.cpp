#include "CServer.h"



CServer::CServer()
{
	m_port = 54000;
	m_ipAdress = "localhost";
}

CServer::~CServer()
{
}

void CServer::initializeServer()
{
	// Initialize WinSock
	WSAData data;
	WORD ver = MAKEWORD(2, 2);
	int wsResult = WSAStartup(ver, &data);
	if (wsResult != 0)
	{
		cerr << "Can't start Winsock, Err #" << wsResult << endl;
		return;
	}
}
