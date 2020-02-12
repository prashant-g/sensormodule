#include "logMesg.h"
	 logMesg::logMesg(int id, string lgT, string lgM)
	{
		logID = id;
		logType = lgT;
		logmsg = lgM;
		tm=chrono::system_clock::to_time_t(chrono::system_clock::now());
	}	

	int logMesg::getlogid()
	{
		return logID;
	}
	string logMesg::getlogType()
	{
		return logType;
	}
	string logMesg::getLogmsg()
	{
		return logmsg;
	}
	time_t logMesg::getLogTime()
	{
		return tm;
	}

