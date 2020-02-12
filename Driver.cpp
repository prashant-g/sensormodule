#include<iostream>
#include<Windows.h>
#include "sensor.h"
#include "ISRs.h"
#include "sensor1.cpp"
#include "sensor2.cpp"
#include "sensor3.cpp"
#include "sensorManager.h"
using namespace std;
int sensorManager::nSensors = 0;
void main()
{
	int count = 0;
	sensorManager smanager;
	
	smanager.init_sensors(new sensor1(111, 0, 'A'), ISR_Sensor1);
	smanager.init_sensors(new sensor2(222, 0, 'X'), ISR_Sensor2);
	smanager.init_sensors(new sensor3(333, 0, 'L'), ISR_Sensor3);
	smanager.DisplayAllSensorData();
	while (count<100)
	{
		//smanager.DisplayAllSensorData();

		count++;
		cout << "count = " << count << endl;
		Sleep(1000);
		smanager.check_trigger_sensor();
		//if(count == 1)
			//smanager.setstatus(111, 3);

		if (count == 10) //true
			smanager.setstatus(111, 1);
		else if (count == 20)
			smanager.setstatus(222, 1);
		else if (count == 30)
			smanager.setstatus(333, 1);
		else if (count%5 == 0)
			smanager.setstatus(111, 2);
		else if (count%3 == 0)
			smanager.setstatus(222, 3);
		else if (count%8 == 0)
			smanager.setstatus(333, 3);

		else if (count == 70)
			smanager.setstatus(111, 0);
		else if (count == 80)
			smanager.setstatus(222, 0);
		else if (count == 90)
		smanager.setstatus(333, 0);


	}
	

}
