#pragma once
#include "logMesg.h"
#include<vector>
class logger
{
	vector<logMesg *> logs;
public:
	void logError(logMesg *);
	void writeMessagetoLogFile();
	~logger();
};