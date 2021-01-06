#ifndef MESSAGEFINDER_H
#define MESSAGEFINDER_H

#include <QString>

class MessageFinder
{
public:
    void getNext(const QString &pattern, int *next)
    {
        next[0] = -1;
        int j = -1;
        for(int i = 1;i < pattern.length();i++)
        {
            while(j > -1 && pattern[j + 1] != pattern[i])
            {
                j = next[j];
            }
            if(pattern[j + 1] == pattern[i])
            {
                j = j + 1;
            }
            next[i] = j;
        }
    }

    bool KMP(const QString &pattern, const QString &txt)
    {
        int *next = new int[pattern.length()];
        getNext(pattern, next);
        int j = -1;
        for(int i = 0;i < txt.length();i++)
        {
            while(j > -1 && pattern[j + 1] != txt[i])
            {
                j = next[j];
            }
            if(pattern[j + 1] == txt[i])
            {
                j = j + 1;
            }
            if(j == pattern.length() - 1)
            {
                return true;
            }
        }
        delete[]next;
        return false;
    }
};

#endif // MESSAGEFINDER_H
