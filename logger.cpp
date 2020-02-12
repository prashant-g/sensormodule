#include "logger.h"
#include<fstream>
#include<string>
#include<chrono>
#include<ctime>

void logger::logError(logMesg *log)
{
	logs.push_back(log);
	cout << "number of log messages = " << logs.size() << endl;
}
void logger::writeMessagetoLogFile()
{
	cout << "saving logs" << endl;
	cout << "logs size = " << logs.size() << endl;
	fstream out;
	out.open("D:\\mydir\\sensorlogfile.txt", ios::app);
	
	for (unsigned int i = 0; i < logs.size(); i++)
	{
		auto tm = logs[i]->getLogTime();
		string str(ctime(&tm));
		str.pop_back();
		out <<str <<" :: "<<logs[i]->getlogid() << " :: " << logs[i]->getlogType() << "  " << logs[i]->getLogmsg() << endl;
	}
		out.close();
}
logger::~logger()
{

}