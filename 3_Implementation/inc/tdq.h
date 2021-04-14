#ifndef __TDQ__
    #define __TDQ__

    typedef enum error{
        SUCCESS,
        CANT_OPEN_FILE,
        FAILURE
    }error_t;

    void clearScreen();

    error_t viewDaemonDetails();

#endif