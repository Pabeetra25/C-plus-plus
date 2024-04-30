#include<iostream>
using namespace std;
class Neso{
    protected:
        string title;
        float rating;
    public:
        Neso(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display()=0;//do nothing function--.PURE virtual function
};
class NesoVideo: public Neso
{
    float videoLength;
    public:
        NesoVideo(string s, float r, float vl): Neso(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    
class NesoText: public Neso
{
    int words;
    public:
        NesoText(string s, float r, int wc): Neso(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};

int main(){
 string title;
    float rating, vlen;
    int words;

    // for Neso Video
    title = "Python tutorial";
    vlen = 6.76;
    rating = 5.49;
    NesoVideo pyVideo(title, rating, vlen);

    // for Neso Text
    title = "Python tutorial Text";
    words = 1033;
    rating = 8.19;
    NesoText pyText(title, rating, words);

    Neso* tuts[2];
    tuts[0] = &pyVideo;
    tuts[1] = &pyText;

    tuts[0]->display();
    tuts[1]->display();
return 0;
}