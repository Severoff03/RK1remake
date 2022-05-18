//
// Created by Сергей Северёв on 18.05.2022.
//

#ifndef RK1REMAKE_TASKS_RK1_H
#define RK1REMAKE_TASKS_RK1_H


#include <tuple>
#include <string>
#include <map>
#include <list>

class tasks_rk1 {

};
void buildTree(int height);

class StudentInfo{
private :
    std::tuple< std::string /*фамилия*/,std::string /*имя*/,char* /*№ студ билета*/> info;
    std::map<std::string/*название предмета*/, std::pair<std::list<int> /*список оценок*/, float /*средняя оценка*/>> subjMark;
public :
    StudentInfo(std::string, std::string,char* );
    int addMark(const std::string& subjName, int mark);
    /*	desription	:	добавления отметки по выбранному предмету
        input		:	subjName - название предмета
        output		:	0 - предмет добавлен, 1 - такой предмет уже есть
    */
    int addSubj(const std::string& subjName);
    /*	desription	:	добавления нового предмета
        input		:	subjName - название предмета
        output		:	среднее значение оценки
    */
    float getAverMark(const std::string& subjName);
    /*	desription	:	вычисления средней оценки по предметам
        input		:	subjName - название предмета
        output		:	среднее значение оценки
    */
    void printInfoStudent();
    /*	desription	:	запись данных в файл формат файла
                            [Фамилия] [имя] : [номер билета]
                                [предмет 1]	:	[оценка 1], [оценка 2],... [оценка N] -- [среднее значение]
                                [предмет 2]	:	[оценка 1], [оценка 2],... [оценка N] -- [среднее значение]
        input		:	subjName - название предмета
        output		:	среднее значение оценки
    */
    void writeAllInfoToFile();
    ~StudentInfo();
};




#endif //RK1REMAKE_TASKS_RK1_H
