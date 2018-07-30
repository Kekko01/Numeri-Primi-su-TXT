//Programma creato da Kekko01 (https://github.com/Kekko01), disponibile su GitHub https://github.com/Kekko01/Numeri-Primi-su-TXT

#include <iostream>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num, div = 2 ; //create variabili per il numero e il divisore
	
	cout<<"Benvenuto nel programma per trovare i numeri primi!!\nPer iniziare, inserisci l'ultimo numero presente nel file Numeri Primi.txt : "; //numero da cui ripartire
	cin>>num;
	num++; //riparte dal numero successivo, così non si ripete il numero primo
	
	while ( 1 == 1 ) //while infinito
	{
		div = 2;
		while (  num % div != 0  && div < num / 2 )	//finché è il resto è diverso da zero (cioè é probabilmente un numero primo e si arriva alla metà (perchè non serve arrivare al numero per capire se è primo
			div++;	//si manda il divisore in +1
		if ( num % div != 0 ) //è se è diverso da 0, è un numero primo!!
		{
			cout<<"Trovato "<<num<<", inserimento nel file: Numeri Primi.txt completato!"<<endl;	//messaggio per far capire che è stato trovato il numero
			ofstream output("Numeri Primi.txt", ios::app);
					output<<num<<endl;	//scrittura numero sul .txt
				
				output.close();
		}
		num++;	//si passa al numero successivo
	}

	return 0;	//non arriverà mai al return 0 (cioè non ci sarà mai una conclusione del programma, quindi per chiderlo basta cliccare sulla x della finestra
}
