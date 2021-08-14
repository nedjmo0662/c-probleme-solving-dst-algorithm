// competetive prog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int main() {

    //int tags;
    //int info;
    //cin >> tags;
    //cin >> info;
    //bool nesting_issue = false;
    //vector<std::string> tagsv;
    //vector<std::string> infov;

    //vector<std::string> tagsvv;
    //vector<std::string> infovv;
    //for (int i = 0; i < tags; i++) {
    //    string ta;
    //    getline(cin, ta);
    //    tagsv.push_back(ta);
    //    tagsv.push_back(ta);
    //}
    //for (int i = 0; i < info; i++) {
    //    string inf;
    //    getline(cin, inf);
    //    tagsv.push_back(inf);
    //    tagsvv.push_back(inf);

    //}
    //for (int j = 0; j < tagsv.size(); j++) {
    //    for (int i = 0; i < (tagsv[j].size() / 2) - 1; i++) {
    //        if (tagsv[i][0] != '<') {
    //            nesting_issue = true;
    //        }
    //        if (tagsv[i][1] == ' ') {
    //            nesting_issue = true;
    //        }
    //        if (tagsv[i][tagsv[j].size() - 1] != '>') {
    //            nesting_issue = true;
    //        }
    //        if (tagsv[i][tagsv[j].size() - 2] != ' ') {
    //            nesting_issue = true;
    //        }
    //    }

    //    for (int i = (tagsv[j].size() / 2); i < (tagsv[j].size()); i++) {
    //        if (tagsv[i][0] != '<') {
    //            nesting_issue = true;
    //        }
    //        if (tagsv[i][1] == ' ') {
    //            nesting_issue = true;
    //        }
    //        if (tagsv[i][tagsv[j].size() - 1] != '>') {
    //            nesting_issue = true;
    //        }
    //        if (tagsv[i][tagsv[j].size() - 2] != '/') {
    //            nesting_issue = true;
    //        }
    //    }
    //}

    //for (int i = tagsv.size() / 2; i < tagsv.size(); i++) {
    //    string str = tagsvv[i][3];
    //    int num = std::stoi(str);
    //    if (num == tagsv[4])
    //}

    vector<string> tags ;
    vector<string> info;
    bool dquote = true;
    bool arrow= true;
    bool spaces = true;
    bool slach = true;
    bool isnested= true;
    int n , m;
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string str;
        getline(cin, str);
        tags.push_back(str);
      
    }
    
   for (int i = 0; i < m; i++)
    {
        cin.ignore();
        string str;
        getline(cin, str);
        info.push_back(str);
    } 
  
  //check for heading tags (<tags1 name = "hfkh">)..
   stack<char>tag_items;
   for (int i = 0; i < (n / 2); i++)
   {
       //check for <>;
       if (tags[i][0] != '<' || tags[i][tags[i].size() - 1] != '>') {
           arrow = false;
       }
       //check for <'' ''>;
       if (tags[i][1] == ' ' || tags[i][tags[i].size() - 2] == ' ') {
           spaces = false;
       }
       //check for "";
       for (int j = 0; j < tags[i].size(); j++)
       {
           if (tags[i][j] == '\"')
           {
               tag_items.push('\"');
               if (tag_items.size() == 2)
               {
                   tag_items.pop();
                   tag_items.pop();
               }
           }
       }

   }

   if (tag_items.size() != 0)
   {
       dquote = false;
   }

   //check for childe tags (</tag2>)..
   if (dquote != false && arrow != false && spaces != false)
   {
       stack<string>nest;
       for (int i = (n / 2); i < n; i++)
       {
           //check for <>;
           if (tags[i][0] != '<' || tags[i][tags[i].size() -1 ] != '>') {
               arrow = false;
           }
           //check for <'' ''>;
           if (tags[i][1] == ' ' || tags[i][tags[i].size() - 2] == ' ') {
               spaces = false;
           }
           //check for "";
           if (tags[i][1] != '/')
           {
               slach = false;
           }
           string str = "";
           for (int j = 1; j <= 4; j++) {
                str = str + (tags[i][j]);
           }
           nest.push(str);
       }
       //check if tags are netsted correctly ;
       for (int i = n / 2; i < n; i++)
       {
           string str = "";
           for (int j = 2; j <= 4; j++)
           {
               str = str + (tags[i][j]);
           }
           if (str == nest.top())
           {
               nest.pop();
           }
       }
       if (nest.size() != 0)
       {
           isnested = false;
       }
   }
   cout << "dquot :" << dquote << '\n' << "arrow :" << arrow << '\n';
   cout << "spaces :" << spaces << '\n' << "isnested :" << isnested << '\n';
   cout << "slach :" << slach << '\n';

   if (dquote == false || arrow == false || spaces == false || isnested == false || slach == false) {
       cout << "there is err \n";
   }
   else {
       cout << "every thing's allright \n";
   }

    return 0;
}
 

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
