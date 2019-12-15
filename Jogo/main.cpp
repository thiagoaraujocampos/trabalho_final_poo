#include <iostream>
#include <stdexcept>

#include "Define.h"
#include "Jogo.h"

using namespace std;

int main(int argc, char **argv) {

  try {
    Jogo Jogo(WIDTH, HEIGHT, NOME);
  } catch (exception &e) {
    cout << "\nEXCEPTION: " << e.what() << endl;
  }

  return 0;
}