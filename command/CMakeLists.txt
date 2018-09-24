set(APPLICATION_SOURCE ${APPLICATION_SOURCE}
    
    ${CMAKE_CURRENT_SOURCE_DIR}/Application.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Document.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Command.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/OpenCommand.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/MacroCommand.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/PasteCommand.cpp
    
    CACHE INTERNAL "Liste mit allen Sourcen der Anwendung."
   )
