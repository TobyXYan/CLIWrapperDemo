set ProjectDir=%1
set TargetName=%2
set Platform=%3
set ConfigName=%4
set TargetDir=%ProjectDir%\%Platform%\%ConfigName%
 
xcopy /f /y %TargetDir%\\CLIWrapper.dll 	"C:\ProjectsOutput\Debug"
xcopy /f /y %TargetDir%\\CLIWrapper.pdb 	"C:\ProjectsOutput\Debug"

