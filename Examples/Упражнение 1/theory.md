# Теория за упражнение 1

## Какво е променлива?
  
Променлива ще наричаме следните парчета код:  
```c
  int step;
  char symbol;
  float number;
  double pi;
```
Всяка променлива се състои от две много важни неща. Първото е нейното име. Всяка променлива има име, което трябва да бъде уникално.
В примера горе имената са: step, symbol, number, pi. Освен да са уникални, имената на променливите може да съдържат малки букви,
големи букви и _. Второто важно нещо за променливите е техният тип. Това ще определя какво те ще могат да съдържат. В примера по горе 
например int означава, че променливата step ще съдържа информация от целочислен тип(пример: 1,2,5,15,-100 и т.н).  

  
Типове:
|       Тип      |            Описание           |    Размер    |                    Стойности - обхват                    |
|:--------------:|:-----------------------------:|:------------:|:--------------------------------------------------------:|
|      char      |             Символ            |     1 бит    |                 -128 до 127 или 0 до 255                 |
|  unsigned char |             Символ            |     1 бит    |                         0 до 255                         |
|   signed char  |             Символ            |     1 бит    |                        -128 до 127                       |
|       int      |           Цяло число          | 2 или 4 бита | -32 768 до 32 767 или от -2 147 483 648 до 2 147 483 647 |
| unsigned int   |     Цяло положително число    | 2 или 4 бита |            0 до 65 535 или 0 до 4 294 967 295            |
|      short     |       "Късо" цяло число       |    2 бита    |                     -32 769 до 32 767                    |
| unsigned short | "Късо" цяло положително число |    2 бита    |                        0 до 65 535                       |
|      long      |       "Дълго" цяло число      |    8 бита    |                           много                          |
|      float     |    Число с плаваща запетая    |    4 бита    |                           много                          |
|     double     |    Число с плаваща запетая    |    8 бита    |                        още повече                        |
  
Не е нужно да се помнят обхватите на стойностите, тъй като те са на едно търсене разстояние. Хубаво е да се знаят размерите
на някои от по основните типове като int, char, float и double.  
Последното нещо, което е важно за една променлива е нейната стойност.  
Пример:
```c
  int a = 42;
  char b = 'b';
```
В показаният пример имаме, че променливата "а", която е от тип "Цяло число" има стойност 42. Това означава, че при всяко следващо 
достъпване на тази променлива, тя ще връща числото 42. Например ако направим а + 3, това ще се оцени до 42 + 3, което е 45. Аналогично 
е за всички останали променливи.  
Всяка променлива има така наречен "Scope". Това е мястото, където тази променлива съществува. Извън него тя не съществува.  
Пример:
```c
int main(){
  int count;
  for(count = 0; count < 10; count++){
    int c = count * 2;
    printf("%d\n", c);
  }
  printf("%d\n", c) ------> Грешка
  return 0;
}
```
В примера може да се види, че променливата "с" не може да бъде достъпне извън "Scope"-а на цикъла for. Можем да кажем, че една 
променлива съществува докато не се достигне }, която отговаря на {, която е преди въвеждането на променливата. В случая { е тази
на цикъла for, както и }.
  
#### Обобщение
Променливата се състои от три неща: Име, тип и стойност. Използват се за съхранение на информация докато програмата е в ход и 
са с уникални имена. Всяка променлива е видима в някакъв "Scope", който ние трябва да определяме.

## Какво е функция?
Много често се налага да пишем код, който се повтаря. За да избегнем повтарянето на код, се въвеждат функциите. Функциите се
състоят от три важни неща: Тип на функцията, Име на функцията и Аргументи на функцията. Идеята на функцията е следната: Искаме
да изчислим нещо много пъти. Тогава правим функция за него със съответните параметри. Тя трябва да връща нещо, за да можем да 
използваме резултата.  
#### Тип на функцията
Типовете на функцията са същите като тези на променливите. Но тук вече означават малко по-различно нещо. При променливите вече знаем,
че типа оказва какви стойности ще приема тя. При функцията типа оказва какво стойност ще връща функцията. Защо е важно. Целта на 
една голяма часто от функциите е те да връщат нещо, което са пресметнали вместо нас. Например имаме функцията sum_two_numbers(1, 3).
Тази функция ни връща число, което е сумата на двете числа в случая 1 и 3. Как връщаме във функция? - със специалния символ return.
Примерно sum_two_numbers(int a, int b){ return a + b; }.  
#### Име на функцията
Чрез името ще можем да извикваме съответната функция. Ако някъде е реализирана функцията sum_two_numbers(int a, int b), то ние например
в main можем да напишем следното: sum_two_numbers(1,3). Това се нарича извикване на функцията. По-късно ще обясня по-подробно с пример.  
#### Аргументи
Може би най-важната част на една функция са нейните аргументи. Защо са важни? - защото без тях много трудно щяхме да подаваме информацията
от която функцията се нуждае. Аргументите можем да го мислим като списък от променливи, като за всяка променлива даваме нейния тип и нейното име
  
Сега малко примери:
```c
// Това е прост пример за функция, която е от тип "Цяло число", името и е "sum_two_numbers" и аргументите са два: "а" от тип цяло число и
// "b" от тип цяло число. Тъй като функцията е от тип "Цяло число", то и return трябва да върне променлива от тип "Цяло число". В случая 
// "с" е точно от такъв тип
int sum_two_numbers(int a, int b){
  int c = a + b;
  return c;
}

int main(){
  // По този начин се извиква функцията, която туко що написахме. Какво реално ще стане. Променливата във функцията "а" ще стане равна на 1,
  // а променливата "b" на 3. След това "c" ще е равно на 1 + 3, което е 4 и функцията ще върне 4. Тогава реално ще имаме int sum = 4 и
  // следователно prinf() ще принтира 4.
  int sum = sum_two_numbers(1, 3);
  printf("%d\n", sum);
  return 0;
}
```
Важно е да се отбележи, че main също е функция. Затова тя също има return, както и тип. Тя е главната функция, т.е. тя винаги се изпълнява
първа и от нея вече можем да извикваме всички останали функции, които ние сме написали.
