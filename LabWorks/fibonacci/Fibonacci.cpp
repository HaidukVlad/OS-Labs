#include <Fibonacci.h>
#include <stdexcept>

std::vector<int> Fibonacci::generateFirstNFibonacci(int n) {
  if (n <= 0) throw std::invalid_argument("Argument must be greater than 0");

  std::vector<int> result;
  result.push_back(0);

  if (n == 1) return result;
  result.push_back(1);

  for (int i = 2; i < n; i++) result.push_back(result[i - 1] + result[i - 2]);

  return result;
}