#ifndef __SIM_BASE_H__
#define __SIM_BASE_H__

#include "Arduino.h"

#define COMMAND_TIMEOUT 500

class SIMBase : public HardwareSerial {
    public:
        SIMBase(int uart_nr) : HardwareSerial(uart_nr) { }

        bool readStringWithTimeout(String *out, uint32_t size, uint32_t timeout = COMMAND_TIMEOUT) ;
        bool readEndsWith(String *out, uint16_t max_size, String endswith, uint32_t timeout = COMMAND_TIMEOUT) ;

        bool wait(String str, uint32_t timeout = COMMAND_TIMEOUT) ;

        bool send(String str) ; // Send to Serial
        bool sendCommand(String cmd, uint32_t timeout = COMMAND_TIMEOUT) ; // Send and wait echo
        bool sendCommandFindOK(String cmd, uint32_t timeout = COMMAND_TIMEOUT) ; // Send , wait echo , find OK
        bool sendCommandGetRespondOneLine(String cmd, String* respond, uint32_t timeout = COMMAND_TIMEOUT) ;
        bool sendCommandCheckRespond(String cmd, uint32_t timeout = COMMAND_TIMEOUT) ;

};

extern SIMBase _SIM_Base;

#endif
