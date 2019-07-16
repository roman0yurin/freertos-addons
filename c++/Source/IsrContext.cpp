/**
* @author Юрин Роман @date 14.07.19
**/


#include "IsrContext.h"
#include "core/atomic/AtomicBlock.h"


static BaseType_t pxHigherPriorityTaskWoken = false;

BaseType_t *getPxHigherPriorityTaskWoken(){
    return &pxHigherPriorityTaskWoken;
}


void isrCheckPriorityTask(){
    bool highWoken;
    ATOMIC_BLOCK{
        highWoken = pxHigherPriorityTaskWoken;
        pxHigherPriorityTaskWoken = false;
    };
    portYIELD_FROM_ISR(highWoken);
}
