#include <iostream>
#include <stdexcept>

#include "Jogo.h"

using namespace std;

int main(int argc, char **argv) {

  try {
    Jogo Jogo(1200, 800, "Joguinho");
  } catch (exception &e) {
    cout << "\nEXCEPTION: " << e.what() << endl;
  }

  return 0;
}