struct plate {
  char code[5];
  char letters[4];
};

typedef struct plate Plate;

Plate* addPlate(char code[4], char letters[3]);

void print(Plate *plate);

void destroy(Plate *plate);

void updateLetters(Plate *plate, char letters[3]);

void updateCode(Plate *plate, char code[4]);
