#pragma once
#include <iostream>;
class feast
{
public:
    bool feastOfBeasts(std::string beast, std::string dish)
    {
        int dishLen = 0;
        int beastLen = 0;
        for (;; beastLen++)
        {
            if (beast[beastLen] == '\0')
                break;
        }
        for (;; dishLen++)
        {
            if (dish[dishLen] == '\0')
                break;
        }

        if (beast[0] == dish[0])
        {
            if (beast[beastLen - 1] == dish[dishLen - 1])
                return true;
            else
                return false;
        }
        else
            return false;
    }
};

