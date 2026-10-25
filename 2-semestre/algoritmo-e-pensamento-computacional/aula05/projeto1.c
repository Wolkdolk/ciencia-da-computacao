#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_CTYPE,"");

    // Entradas
    int qte_participantes, qte_jogadores_por_time, qte_computadores;
    float potencia, duracao, preco_kwh;
    float preco_kit, outros_custos, orcamento;

    // Processamento
    int qte_times, computadores_faltantes;
    float consumo_energia, custo_energia;
    float custo_alimentacao, custo_total;
    float custo_por_participante, saldo;

    // Entrada de dados
    // Solicite ao usuario todos os dados do evento.

    printf("Digite o número de participantes: ");
    scanf("%d", &qte_participantes);

    printf("Digite a quantidade de jogadores por time: ");
    scanf("%d", &qte_jogadores_por_time);

    printf("Digite a quantidade de computadores dispiníveis: ");
    scanf("%d", &qte_computadores);

    printf("Digite a potência dos computadores: ");
    scanf("%f", &potencia);

    printf("Digite a duração do evento em horas: ");
    scanf("%f", &duracao);

    printf("Digite o preço do kWh: ");
    scanf("%f", &preco_kwh);

    printf("Digite o preço de um kit de alimentação por participante: ");
    scanf("%f", &preco_kit);

    printf("Digite outros custos do evento: ");
    scanf("%f", &outros_custos);

    printf("Digite o orçamento maximo disponível para o evento");
    scanf("%f", &orcamento);

    qte_times = ceil(qte_participantes / qte_jogadores_por_time);
    consumo_energia = (qte_computadores * potencia * duracao) / 1000;
    custo_energia = consumo_energia * preco_kwh;
    custo_alimentacao = qte_participantes * preco_kit;
    custo_total = custo_energia + custo_alimentacao + outros_custos;
    custo_por_participante = custo_total / qte_participantes;
    saldo = orcamento - custo_total;
    computadores_faltantes = qte_computadores - qte_participantes;


    printf("\n============= ARENA TECH ==============\n\n");
    printf("Participantes: %d\n\n", qte_participantes);
    printf("Times necessários: %d\n\n", qte_times);
    printf("Computadores disponíveis: %d\n\n", qte_computadores);

    if (qte_computadores >= qte_participantes) {
        printf("Infraestrutura: SUFICIENTE\n\n");
    } else {
        computadores_faltantes = qte_participantes - qte_computadores;
        printf("Infraestrutura: INSUFICIENTE (Faltam %d pcs)\n\n", computadores_faltantes);
    }

    printf("Consumo estimado: %.2f kWh\n\n", consumo_energia);

    if (consumo_energia <= 20) {
        printf("Classificação do consumo: BAIXO\n\n");
    } else if (consumo_energia > 20 && consumo_energia <= 40) {
        printf("Classificação do consumo: MODERADO\n\n");
    } else {
        printf("Classificação do consumo: ALTO\n\n");
    }

    printf("Custo da energia: R$ %.2f\n\n", custo_energia);
    printf("Custo da alimentação: R$ %.2f\n\n", custo_alimentacao);
    printf("Outros custos: R$ %.2f\n\n", outros_custos);
    printf("CUSTO TOTAL: R$ %.2f\n\n", custo_total);
    printf("CUSTO POR PARTICIPANTE: R$ %.2f\n\n", custo_por_participante);
    printf("Orçamento disponível: R$ %.2f\n\n", orcamento);
    printf("Saldo: R$ %.2f\n", saldo);

    return 0;
}
