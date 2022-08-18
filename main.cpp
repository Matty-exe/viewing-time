#include <iostream>
class Serie{
    private:
        int counterH;
        int counterD;
        int counterM;
        int counterS;
    public:
        void Somma(int min, int sec, int ep){
            for(int i = 0; i < ep; i++){
                /*counterM+=min;
                if(counterM>=60){
                    counterH++;
                    counterM-=60;
                }
                if(counterH>24){
                    counterD++;
                }
                if(counterS>60){
                    temp=counterS;
                    temp-=60;
                    if(temp==0){
                        counterM++;
                    }
                    else{
                        counterM++;
                        counterS=temp;
                    }
                }
                */
               counterM+=min;
               counterS+=sec;
            }
            
        }
        void alg(){
            while(counterM>=60){
                if(counterS>=60){
                    counterM++;
                    counterS=0;
                }
                if(counterM>=60){
                    counterM-=60;
                    counterH++;
                }
                if(counterH>=24){
                    counterD++;
                    counterH=0;
                }
            }
            if(counterD<=0){
                std::cout<<"La serie dura "<<counterH<<" ore "<<counterM<<" minuti "<<counterS<<" secondi";
            }
            else{
                std::cout<<"La serie dura "<<counterD<<" giorni "<<counterH<<" ore "<<counterM<<" minuti "<<counterS<<" secondi";
            }
        }        
};
Serie ser;
int main(){
int min,sec,ep;
std::cout<<"Inserisci i minuti di durata: ";
std::cin>>min;
std::cout<<"Inserisci i secondi: ";
std::cin>>sec;
std::cout<<"Inserisci il numero di episodi: ";
std::cin>>ep;
ser.Somma(min,sec,ep);
ser.alg();
}