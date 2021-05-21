#include<iostream>
#include<string>

using namespace std;


void max_min (int *vetor_numeros,int tamanho, int *valor_max, int *valor_min){
    for(int i=0; i<tamanho; i++){ // for loop do tamanho do vetor
        if(*vetor_numeros > *valor_max) // se o valor do vetor for maior que o max substitui o valor máximo
        *valor_max = *vetor_numeros;
        if(*vetor_numeros < *valor_min) // se o valor do vetor for menor que o min substitui o valor mínimo
        *valor_min = *vetor_numeros;
        *vetor_numeros++; //passa ao proximo valor que há dentro do vetor de numeros
    }
}

int main (){
    int quant_inputs, max=0, min=99999;

    cout<<"Insira quantidade de números a serem inputados: "<<endl;
    cin >> quant_inputs;
    int inputs[quant_inputs]; // cria o vetor de acordo com a quantidade de valores a serem inputados
    for(int i=0; i<quant_inputs; i++){
    cout<<"Insira o " << i+1 << " número:\n";
    cin >> inputs[i];
    }

 max_min(inputs,quant_inputs,&max,&min);
  cout<< "Vetor: [";
  for(int i=0; i<quant_inputs;i++){
    if(i == quant_inputs-1){
      cout<< inputs[i];
    }else{
      cout<< inputs[i] << ", "; 
    }
  }
  cout << "]\n";
  cout<< "Número Máximo: "<<max<<endl;
  cout<< "Número Mínimo: "<<min<<endl;
}