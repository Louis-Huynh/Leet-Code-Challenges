#include <iostream>
#include <vector>
#include <queue>
using std::vector;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    bool found = false;
    int i = 0, j = 0;
    std::queue<int> holding;
    bool finish = false;

    while (!finish)
    {
        if (n == 0)
            break;

        if (i >= nums1.size())
        {
            finish = true;
            break;
        }

        else if (!holding.empty())
        {

            if (nums1.at(i) == 0)
            {
                if (j < n)
                {
                    if (holding.front() < nums2.at(j))
                    {
                        nums1.at(i) = holding.front();
                        holding.pop();
                        i++;
                    }
                    else
                    {
                        nums1.at(i) = nums2.at(j);
                        i++;
                        j++;
                    }
                }
                else
                {
                    nums1.at(i) = holding.front();
                    holding.pop();
                    i++;
                }
            }

            // else if (holding.front() == nums1.at(i))
            // {
            //     nums1.at(i+1) = holding.front();
            //     holding.push(nums1.at(i+1));
            //     holding.pop();
            //     i++;
            // }

            else if (holding.front() < nums1.at(i) && holding.front() < nums2.at(j))
            {
                holding.push(nums1[i]);
                nums1.at(i) = holding.front();
                holding.pop();
                i++;
            }

            else if (nums2.at(j) < nums1.at(i) && j < n)
            {
                holding.push(nums1.at(i));
                nums1.at(i) = nums2.at(j);
                i++;
                j++;
            }
            else
            {
                holding.push(nums1.at(i));
                nums1.at(i) = holding.front();
                holding.pop();
                i++;
            }
        }

        else if (nums1.at(i) == 0)
        {
            nums1.at(i) = nums2.at(j);
            i++;
            j++;
        }

        else if (nums1.at(i) >= nums2.at(j))
        {
            holding.push(nums1[i]);
            nums1.at(i) = nums2.at(j);
            i++;
            j++;
        }

        else
        {
            i++;
        }
    }
}