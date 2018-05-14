class Solution {
public:
    void replaceSpace(char *str,int length)
    {
        //替换空格为%20,先分析思路，若每次从前往后替换，发现空格需要将字符串向后移动2位，若提前找到空格个数，
        //则可以拓展所需空间，将字符串向后移动即可
        int spaceNum = 0;
        char* p1 = str;
        while(*p1 != '\0')
            if(*p1++ == ' ')
                spaceNum++;
        char* p2 = p1+2*spaceNum;
        while(p1 != p2)
        {
            if(*p1 == ' ')
            {
                *p2 = '0';
                *(p2-1) = '2';
                *(p2-2) = '%';
                p2 = p2-3;
                p1--;
            }
            else
            {
                *p2 = *p1;
                p1--;
                p2--;
            }
        }

    }
};
