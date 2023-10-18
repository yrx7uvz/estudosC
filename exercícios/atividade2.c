#include <stdio.h>

int main() {
    float num1, num2;
    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);

    printf("Soma: %.2f\n", num1 + num2);
    printf("Subtração: %.2f\n", num1 - num2);
    printf("Multiplicação: %.2f\n", num1 * num2);
    
    if (num2 != 0) {
        printf("Divisão: %.2f\n", num1 / num2);
    } else {
        printf("Divisão por zero não é possível.\n");
    }

    return 0;
}
 // questao 2

 #include <stdio.h>

int main() {
    float num;
    printf("Digite um número: ");
    scanf("%f", &num);

    printf("O dobro é: %.2f\n", 2 * num);

    return 0;
}

//questao 3

#include <stdio.h>

int main() {
    float comprimento, largura;
    printf("Digite o comprimento e a largura da sala: ");
    scanf("%f %f", &comprimento, &largura);

    float area = comprimento * largura;
    printf("A área da sala é: %.2f\n", area);

    return 0;
}


// questao 4 

#include <stdio.h>

int main() {
    float valorReais, cotacaoDolar;
    printf("Digite o valor em reais e a cotação do dólar: ");
    scanf("%f %f", &valorReais, &cotacaoDolar);

    float valorDolares = valorReais / cotacaoDolar;
    printf("O valor em dólares é: %.2f\n", valorDolares);

    return 0;
}


// questao 5

#include <stdio.h>

int main() {
    float custoMercadoria, frete, despesas, valorVenda;
    printf("Digite o custo da mercadoria, frete e despesas: ");
    scanf("%f %f %f", &custoMercadoria, &frete, &despesas);
    
    printf("Digite o valor de venda: ");
    scanf("%f", &valorVenda);
    
    float lucro = valorVenda - (custoMercadoria + frete + despesas);
    float percentualLucro = (lucro / (custoMercadoria + frete + despesas)) * 100;

    printf("Percentual de lucro: %.2f%%\n", percentualLucro);

    return 0;
}

// questao 6

#include <stdio.h>

int main() {
    float raio;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    float area = 3.14159 * raio * raio;
    printf("A área do círculo é: %.2f\n", area);

    return 0;
}

// questao 7

#include <stdio.h>

int main() {
    int anos, meses, dias;
    printf("Digite a idade em anos, meses e dias: ");
    scanf("%d %d %d", &anos, &meses, &dias);

    int idadeEmDias = anos * 365 + meses * 30 + dias;
    printf("A idade em dias é: %d\n", idadeEmDias);

    return 0;
}


// questao 8


#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste;
    printf("Digite o salário atual e o percentual de reajuste: ");
    scanf("%f %f", &salarioAtual, &percentualReajuste);

    float novoSalario = salarioAtual * (1 + percentualReajuste / 100);
    printf("O novo salário é: %.2f\n", novoSalario);

    return 0;
}


// questao 9

#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor;
    printf("Digite o custo de fábrica do carro: ");
    scanf("%f", &custoFabrica);

    float percentualDistribuidor = 0.28;
    float impostos = 0.45;

    custoConsumidor = custoFabrica * (1 + percentualDistribuidor + impostos);
    printf("O custo final ao consumidor é: %.2f\n", custoConsumidor);

    return 0;
}


// questao 10

#include <stdio.h>

int main() {
    int numCarrosVendidos;
    float valorTotalVendas, salarioFixo, valorPorCarro;
    
    printf("Digite o número de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);
    
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);
    
    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);
    
    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarro);
    
    float salarioFinal = salarioFixo + (valorPorCarro * numCarrosVendidos) + (0.05 * valorTotalVendas);
    
    printf("O salário final do vendedor é: %.2f\n", salarioFinal);

    return 0;
}
