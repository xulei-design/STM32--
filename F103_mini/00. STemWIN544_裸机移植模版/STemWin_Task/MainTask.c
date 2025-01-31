/**
  *********************************************************************
  * @file    MainTask.c
  * @author  fire
  * @version V1.0
  * @date    2019-xx-xx
  * @brief   FreeRTOS v9.0.0 + STM32 工程模版
  *********************************************************************
  * @attention
  *
  * 实验平台:野火  STM32 F103 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
  *
  ******************************************************************************
  */
/*******************************************************************************
 * 包含的头文件
 ******************************************************************************/

#include "./led/bsp_led.h"

/* STemWIN头文件 */
#include "GUI.h"
#include "DIALOG.h"

/*******************************************************************************
 * 函数
 ******************************************************************************/
/**
  * @brief GUI主任务
  * @note 无
  * @param 无
  * @retval 无
  */
void MainTask(void)
{
  GUI_SetBkColor(GUI_BLUE);
  GUI_Clear();
  
  GUI_CURSOR_Show();

  GUI_SetColor(GUI_WHITE);
  GUI_SetFont(GUI_FONT_24B_1);
  
  GUI_DispString("Hello World!\r\nNO RTOS");
  
  while(1)
  {
    LED1_TOGGLE;
    GUI_Delay(1000);
  }
}
