##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PECLAlvarezRodriguezLucas
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/lucas/OneDrive/Documentos/EEDD2021
ProjectPath            :=C:/Users/lucas/OneDrive/Documentos/EEDD2021/PECLAlvarezRodriguezLucas
IntermediateDirectory  :=../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas
OutDir                 :=../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=lucas
Date                   :=19/12/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Controlador.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoArbol.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoCola.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Paciente.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoPila.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Arbol.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Pila.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoLista.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Lista.cpp$(ObjectSuffix) \
	../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Cola.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\PECLAlvarezRodriguezLucas" mkdir "..\build-$(ConfigurationName)\PECLAlvarezRodriguezLucas"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\PECLAlvarezRodriguezLucas" mkdir "..\build-$(ConfigurationName)\PECLAlvarezRodriguezLucas"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/.d:
	@if not exist "..\build-$(ConfigurationName)\PECLAlvarezRodriguezLucas" mkdir "..\build-$(ConfigurationName)\PECLAlvarezRodriguezLucas"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Controlador.cpp$(ObjectSuffix): Controlador.cpp ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Controlador.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/EEDD2021/PECLAlvarezRodriguezLucas/Controlador.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Controlador.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Controlador.cpp$(DependSuffix): Controlador.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Controlador.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Controlador.cpp$(DependSuffix) -MM Controlador.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Controlador.cpp$(PreprocessSuffix): Controlador.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Controlador.cpp$(PreprocessSuffix) Controlador.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/EEDD2021/PECLAlvarezRodriguezLucas/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoArbol.cpp$(ObjectSuffix): NodoArbol.cpp ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoArbol.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/EEDD2021/PECLAlvarezRodriguezLucas/NodoArbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoArbol.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoArbol.cpp$(DependSuffix): NodoArbol.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoArbol.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoArbol.cpp$(DependSuffix) -MM NodoArbol.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoArbol.cpp$(PreprocessSuffix): NodoArbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoArbol.cpp$(PreprocessSuffix) NodoArbol.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoCola.cpp$(ObjectSuffix): NodoCola.cpp ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoCola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/EEDD2021/PECLAlvarezRodriguezLucas/NodoCola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoCola.cpp$(DependSuffix): NodoCola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoCola.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoCola.cpp$(DependSuffix) -MM NodoCola.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoCola.cpp$(PreprocessSuffix): NodoCola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoCola.cpp$(PreprocessSuffix) NodoCola.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Paciente.cpp$(ObjectSuffix): Paciente.cpp ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Paciente.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/EEDD2021/PECLAlvarezRodriguezLucas/Paciente.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Paciente.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Paciente.cpp$(DependSuffix): Paciente.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Paciente.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Paciente.cpp$(DependSuffix) -MM Paciente.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Paciente.cpp$(PreprocessSuffix): Paciente.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Paciente.cpp$(PreprocessSuffix) Paciente.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoPila.cpp$(ObjectSuffix): NodoPila.cpp ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoPila.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/EEDD2021/PECLAlvarezRodriguezLucas/NodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoPila.cpp$(DependSuffix): NodoPila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoPila.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoPila.cpp$(DependSuffix) -MM NodoPila.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoPila.cpp$(PreprocessSuffix): NodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoPila.cpp$(PreprocessSuffix) NodoPila.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Arbol.cpp$(ObjectSuffix): Arbol.cpp ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Arbol.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/EEDD2021/PECLAlvarezRodriguezLucas/Arbol.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Arbol.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Arbol.cpp$(DependSuffix): Arbol.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Arbol.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Arbol.cpp$(DependSuffix) -MM Arbol.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Arbol.cpp$(PreprocessSuffix): Arbol.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Arbol.cpp$(PreprocessSuffix) Arbol.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Pila.cpp$(ObjectSuffix): Pila.cpp ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Pila.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/EEDD2021/PECLAlvarezRodriguezLucas/Pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Pila.cpp$(DependSuffix): Pila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Pila.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Pila.cpp$(DependSuffix) -MM Pila.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Pila.cpp$(PreprocessSuffix): Pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Pila.cpp$(PreprocessSuffix) Pila.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoLista.cpp$(ObjectSuffix): NodoLista.cpp ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoLista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/EEDD2021/PECLAlvarezRodriguezLucas/NodoLista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoLista.cpp$(DependSuffix): NodoLista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoLista.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoLista.cpp$(DependSuffix) -MM NodoLista.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoLista.cpp$(PreprocessSuffix): NodoLista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/NodoLista.cpp$(PreprocessSuffix) NodoLista.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Lista.cpp$(ObjectSuffix): Lista.cpp ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Lista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/EEDD2021/PECLAlvarezRodriguezLucas/Lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lista.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Lista.cpp$(DependSuffix): Lista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Lista.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Lista.cpp$(DependSuffix) -MM Lista.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Lista.cpp$(PreprocessSuffix): Lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Lista.cpp$(PreprocessSuffix) Lista.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Cola.cpp$(ObjectSuffix): Cola.cpp ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Cola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/lucas/OneDrive/Documentos/EEDD2021/PECLAlvarezRodriguezLucas/Cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Cola.cpp$(DependSuffix): Cola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Cola.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Cola.cpp$(DependSuffix) -MM Cola.cpp

../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Cola.cpp$(PreprocessSuffix): Cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas/Cola.cpp$(PreprocessSuffix) Cola.cpp


-include ../build-$(ConfigurationName)/PECLAlvarezRodriguezLucas//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


