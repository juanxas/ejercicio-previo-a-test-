int sumar(int sumando1, int sumando2){
    int suma;
    suma= sumando1 + sumando2;
    //printf ("\nLa suma es: %d", suma);
    return suma;
}

int restar (int a,int b){
    int resta;
    resta= a- b;
    return resta;
}

int multiplicar (int c, int d){
    int multi;
    multi=c*d;
    return multi;
}

float dividir (float q, float e){
    float divi;
    if(e==0) {
    return 0;
    }else{
        divi=q/e;
    }
    return divi;
}