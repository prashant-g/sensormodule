#pragma once
#include<iostream>
#include<chrono>
#include<ctime>

using namespace std;
class logMesg
{
	int logID;
	string logType;
	string logmsg;
	time_t tm;

public:
	logMesg(int, string, string);
	int getlogid();
	string getlogType();
	string getLogmsg();
	time_t getLogTime();
};
