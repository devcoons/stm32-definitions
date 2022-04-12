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
 
 
 # GITGRAPH
 ``` mermaid
 %%init:{ {'theme': 'forest'}}%%
  gitGraph
     commit id: "bf7830de"
     commit id: "9a2fc0c7"
     commit id: "a67710d4"
     commit id: "4d99444d"
     commit id: "4b81a4e4"
     commit id: "7e61b24b"
     commit id: "327a3867"
     commit id: "7684952e"
     commit id: "27cffe47"
     commit id: "3ffad3a2"
     commit id: "65bdbafd"
     commit id: "e775358f"
     commit id: "2c686f5a"
     commit id: "64fadc35"
     commit id: "cedf4f82"
     commit id: "155508f9"
     commit id: "081a0f5e"
     commit id: "2f46889b"
     commit id: "64ab1900"
     commit id: "0336a170"
     commit id: "be782158"
     commit id: "6840593a"
     commit id: "44d2a2ba7a"
     commit id: "71f8be845"
     commit id: "8f96a948"

```
    
    
    

  
 
  
 
