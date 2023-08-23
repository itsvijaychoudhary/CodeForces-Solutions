#include <iostream>
#include <vector>

int main()
{
  int n;
  std::cin >> n;

  std::vector<int> givers(n); // givers[i] will store the friend who gave the gift to friend i
  for (int i = 0; i < n; i++)
  {
    int pi;
    std::cin >> pi;
    givers[pi-1] = i+1; // friend pi gave the gift to friend i
  }

  for (int i = 0; i < n; i++)
  {
    std::cout << givers[i] << " ";
  }

  return 0;
}
