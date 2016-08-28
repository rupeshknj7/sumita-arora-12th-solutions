Q. What is wrong with the following while loops:
A)
int counter =1;
while(counter<100)
{
  cout<<counter<<"\n";
  counter--;//Here the counter always decreases this is the fault.
}
Ans..
     Here we can see that the variable counter is initialized as 1.
     and the while loop will terminate only if the variable counter >100 that is the condition given fails
     Now, the variable counter is being decremented ar every iteretion such that it decreases every time.
     Thus it will not be able to be equal to or greater than 100 and the while loop will run forever until the 
     compiler shows time out error.

B)
int counter =1;
while (counter <100)
  cout<<counter<<"\n";//here you can clearly see that only this statement comes under the while loop 
counter++;
Ans..
    Here this while loop is equivalent to the following while loop
    while(counter<100){
      cout<<counter<<"\n";
    }
    which has no increment or decrement of the variable. Which will not ever enable the condition to be false
    i.e. counter < 100. And thus this while loop also is an  infinite loop.
