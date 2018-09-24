set(APPLICATION_SOURCE ${APPLICATION_SOURCE}
    
    ${CMAKE_CURRENT_SOURCE_DIR}/Application.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Document.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Command.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CmdOpenLeftFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CmdOpenRightFile.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/CmdQuit.cpp
    
    CACHE INTERNAL "Liste mit allen Sourcen der Anwendung."
   )
