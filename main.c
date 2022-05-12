#include <stdio.h>
#include <stdlib.h>
#include "plate.h"

int main(void) {
  int size;
  printf("\nQuantidade de elementos: ");
  scanf("%d", &size);
  
  Plate **plates = (Plate**) malloc(size*sizeof(Plate));
  
  if (plates == NULL) {
    printf("Não foi possível alocar memória");
  } else {
    for(int i = 0; i < size; i++) {
      char code[5], letters[4];
  
      printf("Digite as letras: ");
      scanf("%s", letters);

      printf("Digite o código: ");
      scanf("%s", code);

      Plate *plate = addPlate(code, letters);
      plates[i] = plate;
    }
  }

  for(int i = 0; i < size; i++) {
    print(plates[i]);
  }

  updateLetters(plates[0], "abc");
  updateCode(plates[0], "1234");
  print(plates[0]);
  
  free(plates);
  return 0;
}