/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] Z 字形变换
 */

// @lc code=start
// #include<LeetCode.h>
// using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        //将一列和一斜线当做一个Cell
        int cellCount = 2*numRows - 2;
        string result = "";
        if(cellCount == 0)
        {
            return s;
        }
        else
        {           
            //i是行数，也是一个Cell内的Offset；j是第几个Cell的base index
            for(int i = 0;i<numRows;++i)
            {
                //i1是斜线上与i同行的Cell内Offset
                int i1 = cellCount - i;
                for(int j = 0;j<s.length();j+=cellCount)
                {
                    if(i == 0||i==i1)
                    {
                        if(j+i<s.length())
                        {
                            result+=s[j+i];
                        }
                    }
                    else
                    {
                        if(j+i<s.length())
                        {
                        result+=s[j+i]; 
                        }
                        if(j+i1<s.length())
                        {
                            result+=s[j+i1];
                        }
                    }
                }
            } 
        }
        
        return result;
    }
};
// @lc code=end

