set ProjectDir=%1
set TargetName=%2
set Platform=%3
set ConfigName=%4
set TargetDir=%ProjectDir%\%Platform%\%ConfigName%
 
xcopy /f /y %TargetDir%\TargetCppLibrary.dll 	"C:\ProjectsOutput\Debug"
xcopy /f /y %TargetDir%\TargetCppLibrary.pdb 	"C:\ProjectsOutput\Debug"
xcopy /f /y %TargetDir%\TargetCppLibrary.lib 	"C:\ProjectsOutput\Lib"
xcopy /f /y Fox.h                               "C:\ProjectsOutput\Inc"

