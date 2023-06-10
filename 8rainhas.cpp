// "No Copyright"

#include "8rainhas.hpp"

string conversorarquivotxt(const string& arq) {
  std::ifstream ifs(arq.c_str());
    string str((std::istreambuf_iterator<char>(ifs)),
    std::istreambuf_iterator<char>());
    return str;
}

int char1_count(const string str) {
  int qtde = 0;
  for (char ch : str) {
    if (ch == '1') {
      qtde++;
    }
  }
  return qtde;
}

int not_char1or0(const string str) {
  int qtde = 0;
  for (char ch : str) {
    if ((ch != '1') & (ch != '0') & (ch != '\n') &
    (ch != '\0')) {
        qtde++;
      }
 }
  return qtde;
} 

int solucao_8rainhas(const string& teste) {
  string tabuleiro = conversorarquivotxt(teste);
  if (tabuleiro.empty() == true || tabuleiro.size() != 78 ||
  char1_count(tabuleiro) != 8 || not_char1or0(tabuleiro) != 7) {
    return -1;
  } else {
    return char1_count(tabuleiro);
  }
}
