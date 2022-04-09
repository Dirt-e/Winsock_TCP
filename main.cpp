#include <string>
#include "UDP_Talker.h"

#pragma comment (lib,"ws2_32.lib")
using namespace std;

UDP_Talker udp_talker(31090);

int main()
{
	string message = "";

	while (message != "quit")
	{
		cin >> message;
		udp_talker.Talk(message);
	}

	return 0;
}


