#pragma once
#include<iostream>
using namespace std;
class sensor
{
public:
	virtual void setSensorData(int, int, char) = 0;
	virtual void showData() = 0;
	virtual int getStatus() = 0;
	virtual int getID() = 0;
	virtual char getData() = 0;

};