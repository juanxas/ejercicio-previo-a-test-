#include <stdio.h>
void circulo_perimetro (){ 
    float perimetro (int diametro);{ 
        float perimetro;
        perimetro = 3.14 * diametro;
        return perimetro;
    }
}

void circulo_area(){  
    float area (int radio ){
        float area;
        area = 3.14 * radio^2;
        return area;
    }
}

void triangulo_perimetro(int lado){
    float perimetro; {
        float perimetro;
        perimetro = lado+lado+lado;
        return perimetro; 
    }        
}

void triangulo_area(int base, int altura){
    float area;{
        float area;
        area= (base*altura)/2;
        return area;
    }
}

void rectangulo_perimetro(int base, int altura){
    float perimetro;{
        float perimetro;
        perimetro = 2*(base+altura);
        return perimetro;
    }
} 

void rectangulo_area(int base, int altura){
    float area;{
        float area;
        area = base*altura;
        return area;
    }
}

void cuadrado_perimetro(int lado);{
    float perimetro;{
        float perimetro;
        

    }
}

void menu (){
    int opcion;
    do{
        printf("\n****Bienvenido a su calculador de area y perimetro\n");
        printf("1. Calcular un circulo\n");
        printf("2. Calcular un triangulo\n");
        printf("3. Calcular un rectangulo\n");
        printf("4. Calcular un cuadrado\n");
        printf("5. Calcular un trapecio\n");
        printf("6. Salir\n");
        printf("Ingrese la opcion");
        scanf("%d", &opcion);
    }
}