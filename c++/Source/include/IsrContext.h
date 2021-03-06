/**
* @author Юрин Роман @date 14.07.19
**/


#pragma once

#include "FreeRTOS.h"

extern "C" {

/**Флаг, определяющий полявилась ли более приоритетная задача за время работы прерывания.**/
BaseType_t *getPxHigherPriorityTaskWoken();

/**
 * Обеспечивает правильное взаимодействе прерываний со средой FreeRtos, а именно - обеспечивает запуск более приоритетных
 * задач, если они появились во время обработки преывания.
 */
void isrCheckPriorityTask();
}
