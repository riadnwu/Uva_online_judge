#include <iostream>
#include<string>
#include<fstream>

using namespace std;



int main()
{
   ifstream inputData;
   string data="";
   string temp="",s="";


   inputData.open("Trainee_Exam_QuestionAnswer.txt");

   while(getline(inputData,temp))
     {
         data.append(temp);
         data.append("\n");
     }
     while(getline(cin,s) !=0)
     {
         long x,y,z,j,i;


         for(i=0;i<data.length();i++)
         {

             for(j=0;j<s.length();j++)
             {
                 if(data.substr(i).compare(s.substr(j)) != -1)
                 {
                  // cout<<data.substr(i,i+1)<<endl;
                 }
                 else
                 {
                     j=0;
                     break;
                 }
             }
             if(j== s.length())
             {

                temp=data.substr(i+j,i+j+100);
                cout<<temp;
               // cout<<temp.substr(temp.find("answer:"),temp.find("answer:")+15)<<endl;
                break;
             }

         }

       if(i==data.length())
        {
        cout<<"Answer Not Found!!!";
       }
     }
}
