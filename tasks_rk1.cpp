//
// Created by Сергей Северёв on 18.05.2022.
//

#include <iostream>
#include "tasks_rk1.h"

using namespace std;

StudentInfo::StudentInfo(){
    get<0>(info)="Some";
    get<1>(info)="One";
    get<2>(info)="0001";
}

int StudentInfo::addMark(const std::string &subjName, int mark) {

    auto subjMarkIt = lookForSub(subjName);
    if ((*subjMarkIt) != nullptr)
    {
        (*subjMarkIt)->marks_list.push_back(mark);
        float av_mark = 0;
        for(const auto& mark: (*subjMarkIt)->marks_list)
        {
            av_mark += mark;
        }
        av_mark /= (*subjMarkIt)->marks_list.size();
        (*subjMarkIt)->averMark = av_mark;
        return av_mark;
    }
    return 0;
};

int  StudentInfo::addSubj(const std::string& subjName){

};
float  StudentInfo::getAverMark(const std::string& subjName){

};
void StudentInfo::writeAllInfoToFile(){

};

StudentInfo::~StudentInfo() {
};