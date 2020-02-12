#pragma once
#include<iostream>
#include "sensor.h"
using namespace std;

class sensor1 : public sensor
{
	int sensorID;
	int sensorStatus;
	char sensorData;
public:
	
	sensor1(int ID, int st, char dat)
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
		cout << "sensor1 ID " << sensorID << endl;
		cout << "sensor1 Status " << sensorStatus << endl;
		cout << "sensor1 Data " << sensorData << endl;
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