// "No Copyright"

#include "8rainhas.hpp"

string conversorarquivotxt(const string& arq) {
  std::ifstream ifs(arq.c_str());
    string str((std::istreambuf_iterator<char>(ifs)),
    std::istreambuf_iterator<char>());
    return str;
}


int solucao_8rainhas(const string& teste) {
  string tabuleiro = conversorarquivotxt(teste);
  std::cout << tabuleiro;
  return 2;
}
