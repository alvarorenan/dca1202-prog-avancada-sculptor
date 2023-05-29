#include "Sculptor.h"


int main(void) {
  Sculptor sculptor(50, 50, 50); // Criando um escultor de tamanho 50x50x50

  // Definindo as cores
  sculptor.setColor(1, 0, 0, 1); // Vermelho

  // Coração
  sculptor.putEllipsoid(25, 25, 25, 15, 15, 15); // Elipsoide maior
  sculptor.cutEllipsoid(25, 30, 25, 15, 15, 7); // Corte superior
  sculptor.cutEllipsoid(18, 22, 25, 7, 7, 7); // Corte esquerdo
  sculptor.cutEllipsoid(32, 22, 25, 7, 7, 7); // Corte direito
  sculptor.cutEllipsoid(25, 22, 25, 7, 7, 15); // Corte inferior

  sculptor.writeOFF("coracao.off");

  return 0;
  /*
  //exemplo utilizando cut
  Sculptor teste(50, 50, 50);

  // Quadrado 1 (vermelho)

  teste.setColor(1, 0, 0, 1);

  teste.putBox(0, 10, 0, 10, 0, 10);

  teste.cutBox(5, 15, 5, 15, 5, 15);

  teste.writeOFF("quadrados.paraleloscut.off");

  return 0;
  */
  /*
  QUADRADOS PARALELOS
  Sculptor teste(50, 50, 50);

  // Quadrado 1 (vermelho)
  teste.setColor(1, 0, 0, 1);
  teste.putBox(0, 10, 0, 10, 0, 10);

  // Quadrado 2 (verde)
  teste.setColor(0, 1, 0, 1);
  teste.putBox(15, 25, 0, 10, 0, 10);

  // Quadrado 3 (azul)
  teste.setColor(0, 0, 1, 1);
  teste.putBox(30, 40, 0, 10, 0, 10);

  teste.writeOFF("quadrados.paralelos.off");

  return 0;
  */
}
