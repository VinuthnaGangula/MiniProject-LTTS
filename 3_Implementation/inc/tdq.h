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
        NULL_FILE_PTR,
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

    daemon* daemons;

/**
 * @brief 
 * 
 */
void fileToStruct();

/**
 * @brief 
 * 
 */
void viewDaemonList();

/**
 * @brief 
 * 
 * @param dnum 
 */
void viewDaemonDetails(int dnum);

/**
 * @brief 
 * 
 * @param name 
 * @param age 
 * @return error_t 
 */
error_t takeQuiz(char* name, int age);

/**
 * @brief 
 * 
 * @param name 
 * @param age 
 * @param result 
 */
void displayResult(char* name, int age, char* result);

#endif