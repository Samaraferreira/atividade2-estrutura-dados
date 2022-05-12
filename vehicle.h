#include "plate.h"

struct vehicle {
  int year;
  char fabricator[20];
  Plate plate;
};

typedef struct vehicle Vehicle;

Vehicle* addVehicle(int year, char fabricator[20], Plate plate);

void printVehicle(Vehicle *vehicle);

void updatePlate(Plate plate);
