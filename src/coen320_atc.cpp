#include <iostream>
#include "Airspace.h"
#include "Communications.h"
#include "Radar.h"
#include "Display.h"
#include <vector>

using namespace std;

int main() {
	Airspace& airspace = Airspace::getInstance();
	Communications& comms = Communications::getInstance();
	Radar& radar = Radar::getInstance();
	Display& disp = Display::getInstance();


	radar.CollisionPrediction();
	radar.CollisionPrediction(20);

	radar.AdvanceTime();
	vector<Aircraft> aircrafts = radar.Report();

	disp.link_aircraft(aircrafts);
	disp.print_grid();

//	for (Aircraft ac : aircrafts) {
//		ac.PrintMembers();
//	}

	return 0;
}
