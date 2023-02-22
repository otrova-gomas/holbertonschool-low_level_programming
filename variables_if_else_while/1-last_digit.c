/**
 * main - Print the last digit of a randomly generated number
 *
 *
 * Return: Always 0 
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if((n%10) > 5)
    {
      printf{"
