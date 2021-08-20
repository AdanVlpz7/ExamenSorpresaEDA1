#include <stdio.h>

int factorial(int num){
  int resultado = 1;
  for(int i = num; i > 0; i--){
    resultado *= i;
  }
  return resultado;
}

int potencia(int *num,int pow){
  int t = *num;
  if(pow == 0)
    return 1;
  else{
    for(int i = 1; i < pow;i++){
      *num *= t;
    }
    return *num;
  }
}
int fibonacci(int n){
    if(n == 1 || n == 0) return n;
    else return fibonacci(n-1) + fibonacci(n-2);
}
int main(void) {
  int temp = 15;
  //printf("El número factorial de %d es: %d\n",temp, factorial(temp));
  //potencia(&temp,2);
  //printf("El numero %d a la potencia 2 es: %d", temp, potencia(&temp,4));
  printf("%d",fibonacci(temp));
}

