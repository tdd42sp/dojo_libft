######## 		PATHS		#######
PATH_LIBFT_SOURCES				=			../src/
PATH_EXEC_OUTS					=			./outs/
######## 		SOURCES		#######
# Adicione aqui o nome dos testes sem o .c
UNIT_TESTS_SOURCES				=			test_ft_isalpha 
# Aqui será o local dos seu execs de testes 
EXEC_OUTS						=			$(addprefix $(PATH_EXEC_OUTS), $(UNIT_TESTS_SOURCES)) 
# Adicione aqui os seus arquivos da libft
LIBFT_SOURCES					=			$(addprefix $(PATH_LIBFT_SOURCES), \
											ft_isalpha.c)

# As funções <addprefix e addsuffix> são usadas para adicionar texto no inicio ou no final de uma string.

all:		$(UNIT_TESTS_SOURCES) $(EXEC_OUTS)

# Regra para compilar os arquivos da libft com o de teste.
$(UNIT_TESTS_SOURCES):
	@echo	$(rmsuffix $@, .c)$@
	gcc	$(addsuffix .c, $@) $(LIBFT_SOURCES) -o $(addprefix $(PATH_EXEC_OUTS), $@)

# executa os seus testes.
$(EXEC_OUTS):
	$(EXEC_OUTS)

fclean:
	@rm		-f $(EXEC_OUTS)

re: fclean all

.PHONY: $(UNIT_TESTS_SOURCES) $(EXEC_OUTS)


# Para rodar testes unitários basta executar o seguinte comando:
# make run-unit TEST_NAME=<nome-do-test>
run-unit: $(TEST_NAME)

$(TEST_NAME):
	@echo	$(rmsuffix $@, .c)$@
	gcc	$(addsuffix .c, $@) $(LIBFT_SOURCES) -o $(addprefix $(PATH_EXEC_OUTS), $@)
	$(addprefix $(PATH_EXEC_OUTS), $@)