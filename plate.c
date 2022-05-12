#include <stdio.h>
#include <stdlib.h>
#include "plate.h"

Plate* addPlate(char code[4], char letters[3]) {
  Plate *plate = (Plate*) malloc(sizeof(Plate));
  for(int i = 0; i < 4; i++) {
    (*plate).code[i] = code[i];
  }

  (*plate).code[4] = '\0';

  for(int i = 0; i < 3; i++) {
    (*plate).letters[i] = letters[i];
  }

  (*plate).letters[3] = '\0';
  
  return plate;
};

void print(Plate *plate) {
  printf("\n Plate: (%s-%s)", plate->letters, plate->code);
};

void destroy(Plate *plate) {
  free(plate);
};

void updateLetters(Plate *plate, char letters[3]) {
  for(int i = 0; i < 3; i++) {
    (*plate).letters[i] = letters[i];
  }
  (*plate).letters[3] = '\0';
};

void updateCode(Plate *plate, char code[4]) {
  for(int i = 0; i < 4; i++) {
    (*plate).code[i] = code[i];
  }
  (*plate).code[4] = '\0';
};