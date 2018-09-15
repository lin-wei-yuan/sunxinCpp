#include <WINSOCK2.H>
#include <stdio.h>

void main()
{
	// ����socket��
	WORD wVersionRequested;
	WSADATA wsaData;
	int err;
	
	wVersionRequested = MAKEWORD( 1, 1 );
	
	err = WSAStartup( wVersionRequested, &wsaData );
	if ( err != 0 )
	{
		return;
	}
	if ( LOBYTE( wsaData.wVersion ) != 1 ||
        HIBYTE( wsaData.wVersion ) != 1 ) 
	{
		WSACleanup( );
		return; 
	}
	/* The WinSock DLL is acceptable. Proceed. */
	// �����׽���
	SOCKET sockSrv = socket(AF_INET, SOCK_STREAM, 0);
	SOCKADDR_IN addrSrv;
	addrSrv.sin_addr.S_un.S_addr = htonl(INADDR_ANY); // htol ת��Ϊ�����ֽ���
	addrSrv.sin_family = AF_INET;
	addrSrv.sin_port = htons(6000); // ת��U_shot�������ֽ���
	// ��ip��ַ�Ͷ˿ڵ�socket
	bind(sockSrv, (SOCKADDR*)&addrSrv, sizeof(SOCKADDR));
    // ������
	listen(sockSrv, 5);
	// ������ѭ��
	printf("Server has been started.\n");
	// ��¼�ͻ��˵ĵ�ַ����Ϣ
	SOCKADDR_IN addrClient;
	// �׽��ֵĳ���
	int len = sizeof(SOCKADDR);
	
	while(1)
	{
		// �ȴ����տͻ������ӽ���
		SOCKET sockConn = accept(sockSrv, (SOCKADDR*)&addrClient, &len);
		char sendBuf[255];
		sprintf(sendBuf, "Welcome %s to www.sunxin.org", 
			inet_ntoa(addrClient.sin_addr));
		send(sockConn, sendBuf, strlen(sendBuf)+1, 0);
		char recvBuf[255];
		recv(sockConn, recvBuf, 255, 0);
		printf("%s\n", recvBuf);
		// close the connected socket
		closesocket(sockConn);
	}
	// clean socket lib to release the resource
	WSACleanup();
}