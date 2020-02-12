#include<iostream>
#include "sensor.h"
#include "sensorManager.h"
#include "logMesg.h"
using namespace std;


	void sensorManager::init_sensors(sensor *s1, void(*p)(char))
	{
		sensors[nSensors] = s1;
		fp[nSensors] = p;
		nSensors++;

	}
	void sensorManager::check_trigger_sensor()
	{
		for (int i = 0; i < nSensors; i++)
		{
			if (sensors[i]->getStatus() == 1)
				fp[i](sensors[i]->getData());
			else if (sensors[i]->getStatus() == 2)
			{
				//	cout << "sensor with " << sensors[i]->getID() << " is in power down mode" << endl;
				logs.logError(new logMesg(sensors[i]->getID(), "WARNING", "SENSOR IN POWER DOWN MODE"));

			}
		else if (sensors[i]->getStatus() == 3)
			{
				//	cout << "sensor with " << sensors[i]->getID() << " is in power down mode" << endl;
				logs.logError(new logMesg(sensors[i]->getID(), "ERROR", "SENSOR IS DISABLED"));

			}

		}
	}
	void sensorManager::setstatus(int ID, int st)
	{
		for (int i = 0; i < nSensors; i++)
		{
			if (sensors[i]->getID() == ID)
				sensors[i]->setSensorData(ID, st, sensors[i]->getData() + 1);
		}

	}
	void sensorManager::DisplayAllSensorData()
	{
		for (int i = 0; i < nSensors; i++)
		{
			sensors[i]->showData();
		}
	}

	sensorManager::~sensorManager()
	{
		logs.writeMessagetoLogFile();
	}

