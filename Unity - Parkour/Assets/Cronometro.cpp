//Bibliotecas necess�rias

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h> // Para usar o Sleep() comando que definir� o tempo de repeti��o entre os loops
 
int main(void){
    // comando de regionaliza��o "Apenas para adicionar a acentua��o"
    setlocale(LC_ALL, "Portuguese");
    // t�tulo do programa
    SetConsoleTitle("Cronometro");
    
    //vari�veis
    int Segundos=0; //segundos
    int Minutos=0; //minutos
    int Horas=0; //horas
    
    int i=0; // Enquanto a vari�vel i for 0 o loop se repetir�, ou seja, infinitamente. 
        
    do {
        system("cls"); // limpar a tela a cada loop para que fique apenas o cronometro na tela
        
        printf("\tCron�metro\n\n");
        
        printf("\n\t%dh:%dm:%ds\n\n", Horas,Minutos,Segundos); // \n equivale ao "Enter" do teclado e pula a linha, \t para simular o "tab" do teclado e dar maior espa�amento, apenas estica rs
        
        if(Segundos==60){
            Segundos=0;
            Minutos++;
        }
        
        if(Minutos==60){
            Minutos=0;
            Horas++;
        }
        
        if(Horas==24){
            Horas=0;
        }
        
        Sleep(1000); // o sistema por padr�o executaria o loop 1 vez a cada ms, Fun��o que marca o tempo at� que o la�o de repeti��o inicie novamente, "1000" para equivaler a 1s
        Segundos++;
        
    }while (i==0); // condi��o para que o loop seja infinito, enquanto for zero ser� infinito.
 
    system("pause");
    return 0;
}
