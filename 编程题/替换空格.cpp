class Solution {
public:
    void replaceSpace(char *str,int length)
    {
        //�滻�ո�Ϊ%20,�ȷ���˼·����ÿ�δ�ǰ�����滻�����ֿո���Ҫ���ַ�������ƶ�2λ������ǰ�ҵ��ո������
        //�������չ����ռ䣬���ַ�������ƶ�����
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
