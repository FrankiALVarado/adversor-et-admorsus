#pragma once

#include <iostream>
#include <string>
#include <WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib")
using std::string;
using std::cerr;
using std::endl;
class CServer
{
private:
	int m_port;
	string m_ipAdress;
	
public:
	CServer();
	~CServer();

	void initializeServer();
};

