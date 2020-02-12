#pragma once
#include<iostream>
#include "sensor.h"
#include "logger.h"
using namespace std;



class sensorManager
{
	sensor *sensors[20];
	void(*fp[20])(char);
	logger logs;
	static int nSensors;
	
public:
	void init_sensors(sensor *, void(*)(char));
	void check_trigger_sensor();
	void setstatus(int , int );

	void DisplayAllSensorData();
	~sensorManager();
};