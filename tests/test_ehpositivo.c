#include "minunit.h"

int ehpositivo(int);

MU_TEST(teste_ehpositivo_passando_10_retorna_verdadeiro)
{
	int	numero_a_ser_testado = 10;
	int	resultado_esperado = 1;

	int resultado_obtido;
	resultado_obtido = ehpositivo(numero_a_ser_testado);

	mu_assert_int_eq(resultado_esperado, resultado_obtido);
}

MU_TEST(teste_ehpositivo_passando_menos1_retorna_falso)
{
	int	numero_a_ser_testado = -1;
	int	resultado_esperado = 0;

	int resultado_obtido;
	resultado_obtido = ehpositivo(numero_a_ser_testado);

	mu_assert_int_eq(resultado_esperado, resultado_obtido);
}

MU_TEST_SUITE(test_suite) 
{
	MU_RUN_TEST(teste_ehpositivo_passando_10_retorna_verdadeiro);
	MU_RUN_TEST(teste_ehpositivo_passando_menos1_retorna_falso);
}

int main(int argc, char *argv[]) {
	MU_RUN_SUITE(test_suite);
	MU_REPORT();
	return MU_EXIT_CODE;
}