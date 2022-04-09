#pragma once
#include <iostream>
#include <WS2tcpip.h>
using namespace std;

class UDP_Talker
{
public:
	UDP_Talker(int port);	//Ctor
	~UDP_Talker();			//Dtor

	SOCKET mySocket;
	sockaddr_in myAdress;

	void Talk(string s);
};

