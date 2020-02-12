#pragma once
#include<iostream>
#include "sensor.h"
using namespace std;

class sensor3 : public sensor
{
	int sensorID;
	int sensorStatus;
	char sensorData;
public:
	sensor3(int ID, int st, char dat)
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
		cout << "sensor3 ID " << sensorID << endl;
		cout << "sensor3 Status " << sensorStatus << endl;
		cout << "sensor3 Data " << sensorData << endl;
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