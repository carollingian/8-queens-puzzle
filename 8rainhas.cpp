// "No Copyright"

#include "8rainhas.hpp"

// FUNÇÃO Conversão de .txt para string
string conversorarquivotxt(const string& arq) {
  std::ifstream ifs(arq.c_str());
    string str((std::istreambuf_iterator<char>(ifs)),
    std::istreambuf_iterator<char>());
    return str;
}

// FUNÇÃO Contagem de Rainhas ('1') no tabuleiro
int char1_count(const string str) {
  int qtde = 0;
  for (char ch : str) {
    if (ch == '1') {
      qtde++;
    }
  }
  return qtde;
}

// FUNÇÃO Verificação de caracteres (permite apenas '0' e '1')
int not_char1or0(const string str) {
  int qtde = 0;
  for (char ch : str) {
    if ((ch != '1') & (ch != '0') & (ch != '\n') &
    (ch != '\r')) {
        qtde++;
      }
  }
  return qtde;
}


// ------------------- FUNÇÃO main() -------------------
int solucao_8rainhas(const string& teste) {
  string tabuleiro = conversorarquivotxt(teste);

// Condições de Invalidação
  if (tabuleiro.empty() == true || tabuleiro.size() != 78 ||
  char1_count(tabuleiro) != 8 || not_char1or0(tabuleiro) != 0) {
    return -1;

// Condições de Solução
  } else {
    // Conversão de String para Matriz
    int linha = 0;
    int coluna = 0;
    int cont = 1;
    int matriz[8][8];
    for (char ch : tabuleiro) {
      if ((ch == '0' || ch == '1')) {
          if (ch == '0') {
              matriz[linha][coluna] = 0;
          } else if (ch == '1') {
              matriz[linha][coluna] = 1;
          }
          coluna++;
          cont++;
          if (coluna == 8) {
              coluna -= 8;
              linha++;
          }
      }
    }

    // Contagem de Rainhas por linha
    int linha1 = 0;
    int flaglinha = 0;
    for (int i = 0; i < 8; i++) {
      linha1 = 0;
      for (int j = 0; j < 8; j++) {
        if (matriz[i][j] == 1) {
          linha1++;
        }
      if (linha1 > 1) {
        flaglinha++;
      }
      }
    }

    // Retornos Não Solução e Solução
    if (flaglinha > 0) {
      return 0;
    } else {
      return 2;
    }
  }
}
