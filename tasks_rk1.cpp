//
// Created by Сергей Северёв on 18.05.2022.
//

#include <iostream>
#include <list>
#include <fstream>
#include "tasks_rk1.h"

using namespace std;

StudentInfo::StudentInfo(string sname, string name, char* ID){
    get<0>(info)=sname;
    get<1>(info)=name;
    get<2>(info)=ID;
}

int StudentInfo::addMark(const std::string &subjName, int mark) {

    if(subjMark.count(subjName) < 0)
    {
        return 1;
    }
    map <string, pair<list<int>, float>> :: iterator iter;

    iter = subjMark.find(subjName);
    iter->second.first.push_back(mark);

    iter->second.second = ( iter->second.second*iter->second.first.size() + mark)/(iter->second.first.size()+1);

    return 0;



};

int  StudentInfo::addSubj(const std::string& subjName){
    if(subjMark.count(subjName) > 1)
    {
        return 1;
    }
        subjMark[subjName];
        return 0;


};
float  StudentInfo::getAverMark(const std::string& subjName){

    map <string, std::pair<std::list<int>, float>> :: iterator iter;

    iter = subjMark.find(subjName);

    return iter->second.second;

};
void StudentInfo::printInfoStudent(){

    string sname = get<0>(info);
    string name = get<1>(info);
    string ID = get<2>(info);

    cout << sname << " " << name << " " << ID << endl;

    for(auto iter = subjMark.begin(); iter != subjMark.end();iter++)
    {
        cout << iter->first << " ";
        for( auto temp = iter->second.first.begin();temp!= iter->second.first.end(); temp++)
        {
            cout << *temp << " ";
        }
        cout << endl << "AverMark - " << iter->second.second << endl;
        iter++;
    }

};
void StudentInfo::writeAllInfoToFile(){

    ofstream fout;
    fout.open("StudentInfo.txt");

    string sname = get<0>(info);
    string name = get<1>(info);
    string ID = get<2>(info);

    fout << sname << " " << name << " " << ID<< endl;


    for(auto iter = subjMark.begin();iter != subjMark.end() ;iter++)
    {
        fout << iter->first << " ";
        auto it = iter->second.first.begin();
        for(;it != iter->second.first.end(); it++)
        {
            fout << *it << " ";
        }
        fout << "AverMark - " << iter->second.second << endl;
        iter++;
    }

    fout.close();
};

StudentInfo::~StudentInfo() {
};