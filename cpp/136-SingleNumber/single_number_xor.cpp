#include <vector>
using std::vector;

int singleNumber(vector<int> &nums)
{
    int foundOdd = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        foundOdd ^= nums.at(i);
    }
    return foundOdd;
}