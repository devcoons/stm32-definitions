 # DEFINITIONS
 
 STM32 Basic Definitions and Framework Library.
 
 ## How to use
 - Add `definitions.h` to your code.
 - Add `iframework.h` to your code: this automatically includes the libraries and drivers correctly added to the project.
 - Change the templates as needed and add them to your project, renaming them without the `.template` suffix
 - In `user_code.c` and `user_code.h` are defined three functions which can be used to test the code (`user_code_initialize()`, `user_code_experiment_pre()` and `user_code_experiment_post()`).
 
 If the FreeRTOS is enabled:
 - In `tsk_system` there is the entry function defined during the FreeRTOS setup;
 - The `tsk_app` files are the task used in the AppCode folder;
 
 ## Template list
 ## FreeRTOS
 Needed when FreeRTOS is enabled: 
 - [appcode task](https://github.com/energicamotor/stm32-definitions/blob/main/appcode_tsks.h.template)
 - [basecode task](https://github.com/energicamotor/stm32-definitions/blob/main/appcode_tsks.h.template)
 - [system task](https://github.com/energicamotor/stm32-definitions/blob/main/tsk_system.c.template)
 - [task application header](https://github.com/energicamotor/stm32-definitions/blob/main/tsk_app.h.template)
 - [task application source](https://github.com/energicamotor/stm32-definitions/blob/main/tsk_app.c.template)
## User code
- [user code header](https://github.com/energicamotor/stm32-definitions/blob/main/user_code.h.template)
- [user code source](https://github.com/energicamotor/stm32-definitions/blob/main/user_code.c.template)
 
 
 
