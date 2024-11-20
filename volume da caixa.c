#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    // Solicitar ao usuário que insira as dimensões da caixa
    printf("Digite o comprimento da caixa: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da caixa: ");
    scanf("%f", &largura);

    printf("Digite a altura da caixa: ");
    scanf("%f", &altura);

    // Calcular o volume da caixa
    volume = comprimento * largura * altura;

    // Exibir o resultado
    printf("O volume da caixa retangular é: %.2f unidades cúbicas\n", volume);

    return 0;
}
