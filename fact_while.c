long loop_while2(long n)
{
  long result = 1;

  while (n > 1) {
    result *= n;
    n = n - 1;
  }

  return result;
}
