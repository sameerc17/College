#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int queue[100], n, i, start, head, seek = 0;
  float avg;

  cout << "Enter number of requests: ";
  cin >> n;

  cout << "Enter tracks: ";
  for (i = 1; i <= n; i++)
    cin >> queue[i];

  sort(queue, queue + n);

  cout << "Enter initial head value: ";
  cin >> head;

  // Finding starting point
  for (i = 0; i < n; i++)
  {
    if (queue[i] == head)
    {
      start = i;
      break;
    }
  }

  int diff, curr, save = queue[start];

  for (i = start - 1; i >= 0; --i)
  {

    curr = queue[i];
    diff = save - curr;
    if (diff < 0)
      diff *= -1;
    seek += diff;
    save = curr;
  }
  seek += save;
  save = 0;

  for (i = start + 1; i < n; i++)
  {
    curr = queue[i];
    diff = curr - save;
    if (diff < 0)
      diff *= -1;
    seek += diff;
    save = curr;
  }
  cout << "Total Seek Time: " << seek << "\n";
  avg = seek / (float)n;
  cout << "Average Seek Time: " << avg << "\n";
}
