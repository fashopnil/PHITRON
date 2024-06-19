#include<bits/stdc++.h>
using namespace std;
class cuboid
{
private:
    float length;
    float width;
    float height;
    cuboid()
    {
        length=0;
        width=0;
        height=0;
    }
    cuboid(float length,float width,float height)
    {
        this->length=length;
        this->width=width;
        this->height;
    }
    public:
    float getvolume(float wid,float het)
    {
        return 1*wid*het;

    }
    float getsurfacearea(float wid,float het)
    {
        return 2*1*wid+2*1*het+2*wid*het;
    }
};
int main()
{
    cuboid s[5];
    return 0;
}