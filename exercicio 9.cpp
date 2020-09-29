 #include <stdio.h>  
 #include <conio.h>
 
 main(){  
   int cont, valor;  
   
   printf("Digite um valor: ");  
   scanf("%d",&valor);  
   
   for(cont=0;cont<=valor;cont++){  
    printf("%d ",cont);  
   }  
   getch();
   return 0;  
 }  
