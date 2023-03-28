#include <stdio.h>

int main(){
float faturamento_SP, faturamento_RJ, faturamento_MG, faturamento_ES, faturamento_Outros, faturamento_Total;
faturamento_SP = 67836.43;
faturamento_RJ = 36678.66;
faturamento_MG = 29229.88;
faturamento_ES = 27165.48;
faturamento_Outros = 19849.53;
faturamento_Total = faturamento_SP + faturamento_RJ + faturamento_MG + faturamento_ES + faturamento_Outros;
// porcentagem de cada faturamento em relação ao total -----------------------------------------------------
faturamento_SP = faturamento_SP/faturamento_Total * 100;
faturamento_RJ = faturamento_RJ/faturamento_Total * 100;
faturamento_MG = faturamento_MG/faturamento_Total * 100;
faturamento_ES = faturamento_ES/faturamento_Total * 100;
faturamento_Outros = faturamento_Outros/faturamento_Total * 100;
// imprimir os faturamentos: ------------------------------------------------------------------------------
printf("Faturamentos: \n");
printf("SP = %.2f %%, ", faturamento_SP);
printf("RJ = %.2f %%, ", faturamento_RJ);
printf("MG = %.2f %%, ", faturamento_MG);
printf("ES = %.2f %%, ", faturamento_ES);
printf("SP = %.2f %%\n", faturamento_Outros);     
}