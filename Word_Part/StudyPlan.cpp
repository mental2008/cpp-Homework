#include "StudyPlan.h"
using std::string;
using std::cout;
using std::endl;
//std::__cxx11::string StudyPlan::GetSystemTime()
//{
////    SYSTEMTIME ct;
////    GetLocalTime(&ct);
////    cout << ct.wYear << " " << ct.wMonth << " " << ct.wDay << endl;
////    cout << ct.wHour << " " << ct.wMinute << " " << ct.wSecond << endl;
//    time_t t = time(0);
//    char tmp[64];
//    strftime(tmp, sizeof(tmp), "%Y/%m/%d %X", localtime(&t));
//    string SystemTime = tmp;
//    return SystemTime;
//}


//void StudyPlan::setCreationTime()
//{
//    creationTime = getSystemTime();
//}

//void StudyPlan::SetEndTime(string year,string month,string day)
//{
//    endTime=year+"/"+month+"/"+day;
//}

//void StudyPlan::setNote(string note)
//{
//    this->note =note;
//}

//string StudyPlan::getCreationTime()
//{
//    return creationTime;
//}

//string StudyPlan::getEndTime()
//{
//    return endTime;
//}

//string StudyPlan::getNote()
//{
//    return note;
//}

StudyPlan::StudyPlan(SYSTEMTIME ct):ShortNote(ct)
{
    shown="";
    setFilePath("StudyPlan/");
}

void StudyPlan::setShown()
{
    shown=getEndTime()+"\n"+getNote();
}

std::__cxx11::string StudyPlan::getShown()
{
//    string shown;
//    shown =GetEndTime()+"\n"+GetNote();
    return shown;
}

void StudyPlan::JUSTCLAIMPUREVIRTUAL()
{
    ;
}

void StudyPlan::fileSearch(string path,std::vector<string>& vec)
{

    struct _finddata_t filefind;

        string curr = path + "\\*.*";
        int done = 0, i, handle;

        if ((handle = _findfirst(curr.c_str(), &filefind)) == -1)return;

        while (!(done = _findnext(handle, &filefind)))
        {
            if (!strcmp(filefind.name, ".."))continue;
            /*if ((_A_SUBDIR == filefind.attrib))
            {
            cout << filefind.name << "(dir)" << endl;
            curr = path + "\\" + filefind.name;
            file_search(curr);
            }*/
            if ((_A_SUBDIR != filefind.attrib))
            {
                //打印文件名
                //cout << filefind.name << endl;
                vec.push_back(filefind.name);
            }
        }
        //关闭句柄
        _findclose(handle);
}
