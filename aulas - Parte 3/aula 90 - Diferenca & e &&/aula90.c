/*
DIFERENÇA ENTRE UTILIZAR O OPERADOR LOGICO & E &&

Pode ser que dependendo do impacto de utilizar o & e &&, pode ser que em algum momento seu programa nao apresente o resultado esperado.

A melhor maneira de saber isso, é verificando a documentacao oficial da linguagem. A linguagem C utiliza a dodumentacao ISO9899 (iso-9899.info/wiki/The_standard), onde terá informacoes das versoes mais antigas até a ultima versao(C18 - ano de revisao de 2018).

Especificamente falando do & e &&, temos a seguinte nomenclatura no documento:

"Unlike the bitwise binary & operator, the && operator guarantees left-right evaluation; if the second operand is evaluated, there is a sequence point between the evaluations of the first and second operands. If the first operand compares equal to 0, the second operand is not evaluated."

"Ao contrario do operador & binario bit a bit, o operador && garante a avaliacao da esquerda para a direita; se o segundo operando for avaliado, há um ponto de sequencia entre as avaliacoes do primeiro e do segundo operando. Se o primeiro operando for igual a 0, o segundo operando nao sera avaliado."

Esta informacao vale tambem para o operador | e ||.

*/