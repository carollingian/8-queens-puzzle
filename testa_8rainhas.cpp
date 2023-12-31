// "No Copyright"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "8rainhas.hpp"


TEST_CASE("Solução 8 Rainhas", "[inteiro]") {
    REQUIRE(solucao_8rainhas("solucao1_8rainhas.txt") == 1);

    REQUIRE(solucao_8rainhas("solucao2_8rainhas.txt") == 1);
}




TEST_CASE("Não é Solução 8 Rainhas", "[inteiro]") {
    REQUIRE(solucao_8rainhas("naosolucao1_8rainhas.txt") == 0);

    REQUIRE(solucao_8rainhas("naosolucao2_8rainhas.txt") == 0);

    REQUIRE(solucao_8rainhas("naosolucao3_8rainhas.txt") == 0);

    REQUIRE(solucao_8rainhas("naosolucao4_8rainhas.txt") == 0);

    REQUIRE(solucao_8rainhas("naosolucao5_8rainhas.txt") == 0);

    REQUIRE(solucao_8rainhas("naosolucao6_8rainhas.txt") == 0);
}




TEST_CASE("Inválido 8 Rainhas", "[inteiro]") {
    REQUIRE(solucao_8rainhas("invalido1.txt") == -1);

    REQUIRE(solucao_8rainhas("invalido2.txt") == -1);

    REQUIRE(solucao_8rainhas("invalido3.txt") == -1);

    REQUIRE(solucao_8rainhas("invalido4.txt") == -1);

    REQUIRE(solucao_8rainhas("invalido5.txt") == -1);

    REQUIRE(solucao_8rainhas("invalido6.txt") == -1);

    REQUIRE(solucao_8rainhas("invalido7.txt") == -1);
}
