#include <stdio.h>

struct gestaoMusicos {
  char nomeMusico[60];
  int codigoMusico;
  int idadeMusico;
  int numeroAlbuns;
  int numeroConcertos;
};


int main() {
  //Variaveis
  float mediaIdades, mediaConcertos, somaIdade, somaConcertos, max, min;
  int mais60, menorIgual60, codigoProcurar, check;
  char ghost[5], maisVelho, maisNovo; 

  struct gestaoMusicos musicos [4];

  //Recolha de dados
  for(int i = 0; i < 4; i++) {
    printf("Digite o nome do músico: "); 
    gets(musicos[i].nomeMusico); 
    printf("Digite o código do músico: ");
    scanf("%d", &musicos[i].codigoMusico);
    printf("Digite a idade do músico: ");
    scanf("%d", &musicos[i].idadeMusico);
    printf("Digite o número de albuns editados do músico: ");
    scanf("%d", &musicos[i].numeroAlbuns);
    printf("Digite o número de concertos do músico: ");
    scanf("%d", &musicos[i].numeroConcertos);
    gets(ghost);
    printf("======================================================\n");
    somaIdade = somaIdade + musicos[i].idadeMusico;
    somaConcertos = somaConcertos + musicos[i].numeroConcertos;
  }

  mais60 = 0;
  menorIgual60 = 0;
  for(int i = 0; i < 4; i++) {
    if (musicos[i].idadeMusico > 60) {
      mais60 = mais60 + 1;
    }
    else {
      menorIgual60 = menorIgual60 + 1;
    }
  }
  //Verificar qual é a idade máxima
  max = musicos[0].idadeMusico;
  for (int i = 0; i < 4; i++) {
      if (max <= musicos[i].idadeMusico) {
          max = musicos[i].idadeMusico;
      }
  }

  //Verificar qual é a idade mínima
  min = musicos[0].idadeMusico;
  for (int i = 0; i < 4; i++) {
      if (min >= musicos[i].idadeMusico) {
          min = musicos[i].idadeMusico;
      }
  }

  //Printar idade maxima
  for (int i = 0; i < 4; i++) {
    if (musicos[i].idadeMusico == max) {
      printf("%s é o mais velho \n", musicos[i].nomeMusico);
    }
  }
  //Printar idade minima
  for (int i = 0; i < 4; i++) {
    if (musicos[i].idadeMusico == min) {
      printf("%s é o mais novo\n", musicos[i].nomeMusico);
    }
  }

  //Calcular médias
  mediaIdades = somaIdade / 4;
  mediaConcertos = somaConcertos / 4;

  //Imprimir objetivos
  printf("A média das idades dos músicos é: %.6g \n", mediaIdades);
  printf("A média de número de concertos é: %.6g \n", mediaConcertos);
  printf("O número de músicos com mais de 60 anos é %d \n", mais60);
  printf("O número de músicos com 60 ou menos anos é %d \n", menorIgual60);


//procurar esta  por fazer
  printf("======================================================\n");
  //procurar musico pelo codigomusico

  
  printf("Digite o código do músico a procurar: ");
  scanf("%d", &codigoProcurar);
  check = 0;
  for (int i = 0; i < 4; i++) { 
    if (codigoProcurar == musicos[i].codigoMusico) { 
      
      printf("O nome do músico é %s \n", musicos[i].nomeMusico);
      printf("A idade do músico é %d \n", musicos[i].idadeMusico);
      printf("O número de albuns editados é %d \n", musicos[i].numeroAlbuns);
      printf("O número de concertos do músico é %d \n", musicos[i].numeroConcertos); 
      check = 1;
    }
    else if (i == 3 && check == 0){
      printf("Nao foi achado nenhum Musico com esse nome");
    }
  }

}
