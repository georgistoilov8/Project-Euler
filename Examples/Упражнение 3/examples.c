// Хубаво е да погледнеш и тук. Обяснено е и с картинки: https://www.programiz.com/c-programming/c-user-defined-functions
// Тук също. Има добре обяснени примери: https://www.programiz.com/c-programming/types-user-defined-functions

#inlcude <stdio.h>

// #1.
void printHello(){
  printf("Hello World\n");
}

// #2.
// Тъй като средното аритметично е число от тип float, защото може да е например 2.34, тогава връщаме float
float getAverage(int a, int b){
  float average = (a + b) / 2;
  return average;
}

// #3.
int addNumbers(int a, int b)         // function definition   
{
    int result;
    result = a+b;
    return result;                  // return statement
}

int main(){
  //#1.
  printHello();
  
  //#2.
  getAverage(1,2);
  
  int a = 2;
  int b = 3;
  getAverage(a, b);
  
  int c = getAverage(a, b);
  printf("%d\n", getAverage(a, b);
  
  //#3.
  int n1,n2,sum;

  printf("Enters two numbers: ");
  scanf("%d %d",&n1,&n2);

  sum = addNumbers(n1, n2);        // function call
  printf("sum = %d",sum);
}
