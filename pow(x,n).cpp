using namespace std;

double myPow(double x, int n) {

  long long power = n;
  if (n < 0) {
    x = 1 / x;
    power *= -1;
  }
  double pow = 1.0;

  while (power > 0) {
    if (power % 2 == 0) {
      x *= x;
      power /= 2;
    } else {
      pow *= x;
      power--;
    }
  }
  return pow;
}
