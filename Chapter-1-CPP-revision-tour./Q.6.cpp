//Q Give the output of the following program:
void main()
{
   char *p="Difficult";
   char c;
   c=++*p++;//p has the base value that is pointer to D which incements and point to the nest char i.e. i and than increments its 
   //value in ACII by 1 i.e. it makes it j.
   printf("%c",c);
}
//the output of the program is:
//'j' the letter j;
