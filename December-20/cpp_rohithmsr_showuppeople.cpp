// Leetcode Problem
// Runtime: 8 ms, faster than 99.73% of C++ online submissions
// for Student Attendance Record II.
// Memory Usage: 6.3 MB, less than 93.50% of C++ online submissions
// for Student Attendance Record II.

class Solution
{
public:
    int checkRecord(int n)
    {

        int mod = 1e9 + 7;
        long int xaxl = 1; // No A , No L at the end
        long int xal = 1;  // No A , 1 L at the end
        long int xall = 0; // No A , 2 L at the end
        long int axl = 1;  // 1 A , No L at the end
        long int al = 0;   // 1 A , 1 L at the end
        long int all = 0;  // 1 A , 2 L at the end
        long int ans = 3;

        for (int i = 2; i <= n; i++)
        {
            long int n_xaxl = xaxl;
            long int n_xal = xal;
            long int n_xall = xall;
            long int n_axl = axl;
            long int n_al = al;
            long int n_all = all;

            xaxl = (n_xaxl + n_xal + n_xall) % mod;
            xal = (n_xaxl) % mod;
            xall = n_xal % mod;
            axl = (n_xaxl + n_xal + n_xall + n_axl + n_al + n_all) % mod;
            al = (n_axl) % mod;
            all = (n_al) % mod;

            ans = (xaxl + xal + xall + axl + al + all) % mod;
        }

        return ans;
    }
};