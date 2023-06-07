#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "8rainhas.hpp"


TEST_CASE( "Solução 8 Rainhas", "[inteiro]" ) {
    REQUIRE( solucao_8rainhas("00000100\n01000000\n00010000\n00000010\n00100000\n00000001\n00001000\n10000000") == 1 );

    
}




TEST_CASE( "Não é Solução 8 Rainhas", "[inteiro]" ) {
    REQUIRE( solucao_8rainhas("10000000\n10000000\n10000000\n10000000\n10000000\n10000000\n10000000\n10000000") == 0 );

    
}

TEST_CASE( "Inválido 8 Rainhas", "[inteiro]" ) {
    REQUIRE( solucao_8rainhas("G") == -1 );

    
}