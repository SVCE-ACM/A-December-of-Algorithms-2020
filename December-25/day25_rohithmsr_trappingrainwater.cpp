/*
Runtime: 4 ms, faster than 98.81% of C++ online submissions for Trapping Rain Water.
Memory Usage: 14.4 MB, less than 96.32% of C++ online submissions for Trapping Rain Water.
*/

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int i = 0;
        int j = height.size() - 1;
        int vol = 0;
        int lmax = 0;
        int rmax = 0;

        while (i < j)
        {
            lmax = max(lmax, height[i]);
            rmax = max(rmax, height[j]);

            if (lmax < rmax)
            {
                vol += lmax - height[i];
                i++;
            }
            else
            {
                vol += rmax - height[j];
                j--;
            }
        }

        return vol;
    }
};