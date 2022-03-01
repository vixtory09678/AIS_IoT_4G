#ifndef __GSM_STORAGE_H__
#define __GSM_STORAGE_H__

#include "Arduino.h"

typedef enum {
    DIR_TYPE = 1,
    FILE_TYPE
} ListType;

typedef std::vector<String> ListFileString;

class GSMStorage {
    private:
        bool selectCurrentDirectory(String path) ;
        String getListOf(ListType listType, String path);
        char _current_drive = 'C';

    public:
        GSMStorage() ;

        bool fileWrite(String path, String content) ;
        String fileRead(String path) ;

        bool mkdir(String path) ;
        bool rmdir(String path) ;
        bool remove(String path) ;

        bool isFileExist(String path) ;
        ListFileString getListOfFiles(String path) ;
        ListFileString getListOfDirectories(String path) ;
};

extern GSMStorage Storage;

#endif
