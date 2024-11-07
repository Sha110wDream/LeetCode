/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
#include"LeetCode.h"

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        std::string strIntMax = std::to_string(INT_MAX),
                    strIntMin = std::to_string(INT_MIN),
                    strXReverse = StrReverse(x);
        if(x<0)
        {
            FirstStrIntLarger(strXReverse, strIntMin) ? result = std::stoi(strXReverse) : result = 0;
        }
        else
        {
            FirstStrIntLarger(strXReverse,strIntMax)?result=0:result=std::stoi(strXReverse);
        }

        return result;
    }

    std::string StrReverse(int x)
    {
        std::string strX = std::to_string(x),
                    result = "";
        if(x<0)
        {
            result += '-';
            for(int i = strX.length()-1;i > 0;--i)
            {
                result += strX[i];
            }
        }
        else
        {
            for(int i = strX.length()-1;i >= 0;--i)
            {
                result += strX[i];
            }
        }

        return result;
    }

    bool FirstStrIntLarger(std::string str1,std::string str2)
    {
        if(str1[0] == '-')//str1是负数
        {
            if(str2[0]!='-')//str2不是负数
            {
                return false;
            }
            else
            {
                if(str1.length()==str2.length())
                {
                    return str1 <= str2;//负数字符串大的，反而小
                }
                else
                {
                    return str1.length()<str2.length();
                }
            }
        }
        else//str1是正数
        {
            if(str2[0]=='-')//str2是负数
            {
                return true;
            }
            else//str2不是负数
            {
                if(str1.length()==str2.length())
                {
                   return str1>=str2; 
                }
                else
                {
                    return str1.length()>str2.length();
                }
            }
        }
    }
};
// @lc code=end

