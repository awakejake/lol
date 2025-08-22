#include <stdio.h>
int main() {
int even = 0, odd = 0,x;
for (int i = 0; i < 10; i++)
{
printf("Enter value %d: "
, i + 1);
if (scanf("%d"
, &x) !=1)
{
return 1;
}
if ((x % 2) == 0)
{
even++;
}
else
{
odd++;
}
}
printf("Even numbers: %d\n",even);
printf("Odd numbers: %d\n",odd);
return 0;
}