cmake_minimum_required(VERSION 2.8)

project(Cpp_DesignPatterns)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
set(default_build_type "Debug")

add_executable(design_patterns
               command/Application.cpp
               command/CmdFileOpen.cpp
               command/CmdQuit.cpp
               command/Command.cpp
               command/DiffDocument.cpp
               composite/Bus.cpp
               composite/Cabinet.cpp
               composite/Card.cpp
               composite/Chassis.cpp
               composite/CompositeEquipment.cpp
               composite/Equipment.cpp
               composite/FloppyDisk.cpp
               decorator/BorderDecorator.cpp
               decorator/ConcreteComponentTextObject.cpp
               decorator/Decorator.cpp
               decorator/RedColorDecorator.cpp
               interpreter/AndExp.cpp
               interpreter/BooleanExp.cpp
               interpreter/Constant.cpp
               interpreter/Context.cpp
               interpreter/OrExp.cpp
               interpreter/NotExp.cpp
               interpreter/VariableExp.cpp
               observer/AnalogClock.cpp
               observer/ClockTimer.cpp
               observer/DigitalClock.cpp
               observer/Observer.cpp
               observer/Subject.cpp
               strategy/ArrayCompositor.cpp
               strategy/Composition.cpp
               strategy/Compositor.cpp
               strategy/TriangularCompositor.cpp
               main.cpp)

target_include_directories (design_patterns PUBLIC
                            command
                            composite
                            decorator
                            interpreter
                            observer
                            strategy
                            .)

add_custom_command(TARGET design_patterns
                   POST_BUILD
                   COMMAND cp design_patterns ${CMAKE_CURRENT_SOURCE_DIR}/..
                   DEPENDS design_patterns)
