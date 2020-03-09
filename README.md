# README

##  Overview ##
Experiments and implementations based the Design Patterns book from 
Gamma, Helm, Johnson and Vlissides.

## Development environment
### Setup
The project can be build using cmake:

First create a directory *build* parallel to the *src* directory and 
enter it.

Then call cmake to let cmake create the Makefile

    cmake .. 
    
After this the project can be compiled from within the build directory 
by calling

    make

### Build with VisualStudioCode

The included .vscode/tasks.json is set up to build automatically if you
hit *Ctrl + Shifh + b* in VSCode. After the build the unstripped binary 
is copiedto the project dir automatically.

### Debug with VisualStudioCode

The included .vscode/launch.json is set up to start debugging by 
hitting *F5* from inside VSCode.
