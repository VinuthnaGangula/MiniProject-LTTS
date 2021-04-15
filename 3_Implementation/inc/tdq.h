/**
 * @file tdq.h
 * @author Vinuthna
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __TDQ__
    #define __TDQ__

    /**
     * @brief 
     * 
     */
    typedef enum error{
        SUCCESS,
        CANT_OPEN_FILE,
        NULL_FILE_PTR,
        FAILURE
    }error_t;

    /**
     * @brief 
     * 
     */
    typedef struct{
        int d_num;
        char d_name[50];
        char d_detail[200];
    }daemon;
    daemon daemons[20];

/**
 * @brief 
 * 
 * @return error_t 
 */
error_t populateStruct();

/**
 * @brief 
 * 
 * @return error_t 
 */
error_t viewDaemonList();

/**
 * @brief 
 * 
 * @param dnum 
 * @return error_t 
 */
error_t viewDaemonDetails(int dnum);

/**
 * @brief 
 * 
 * @return char* 
 */
char* takeQuiz();

/**
 * @brief 
 * 
 * @param name 
 * @param age 
 * @param result 
 * @return error_t 
 */
error_t displayResult(char* name, int age, char* result);

#endif