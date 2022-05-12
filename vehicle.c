#include <stdio.h>
#include <stdlib.h>
#include "vehicle.h"

Vehicle* addVehicle(char year, char fabricator[20], Plate plate) {
  Vehicle *vehicle = (Vehicle*) malloc(sizeof(Vehicle));
  
  for(int i = 0; i < 20; i++) {
    (*vehicle).fabricator[i] = fabricator[i];
  }
  (*vehicle).fabricator[4] = '\0';

  vehicle->year = year;
  vehicle->plate = plate;

  return vehicle;
};

void printVehicle(Vehicle *vehicle) {
  printf("\n Vehicle: (%d-%s)", vehicle->year, vehicle->fabricator);
  print(&vehicle->plate);
};

void updatePlate(Plate plate) {
  
};