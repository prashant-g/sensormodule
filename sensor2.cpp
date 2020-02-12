#include<iostream>
#pragma once
#include "sensor.h"
using namespace std;

class sensor2 : public sensor
{
	int sensorID;
	int sensorStatus;
	char sensorData;
public:
	sensor2(int ID, int st, char dat)
	{
		sensorID = ID;
		sensorStatus = st;
		sensorData = dat;
	}
	void setSensorData(int ID, int st, char dat)
	{
		sensorID = ID;
		sensorStatus = st;
		sensorData = dat;
	}
	virtual void showData()
	{
		cout << "sensor2 ID " << sensorID << endl;
		cout << "sensor2 Status " << sensorStatus << endl;
		cout << "sensor2 Data " << sensorData << endl;
	}
	int getStatus()
	{
		return sensorStatus;
	}
	int getID()
	{
		return sensorID;
	}
	char getData()
	{
		return sensorData;
	}

};