#include<stdio.h>
int main() {
int n = 8, x, smallest, largest;
for (int i = 0; i < n; i++)
{
printf("Enter number %d: "
, i + 1);
if (scanf("%d"
, &x) !=1)
{
return 1;
}
if (i == 0)
{
smallest = largest = x;
}
else
{
if (x < smallest)
{
smallest = x;
}
if (x > largest)
{
largest = x;
}
}
}
printf("Smallest number: %d\n",smallest);
printf("Largest number: %d\n",largest);
return 0;
}