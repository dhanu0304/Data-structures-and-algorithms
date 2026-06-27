@echo off
setlocal
set "source=%~1"
if not defined source (
    echo No source file provided.
    exit /b 1
)
set "sourceDir=%~dp1"
set "sourceName=%~n1"
cd /d "%sourceDir%"
C:\MinGW\bin\gcc.exe "%source%" -o "%sourceDir%%sourceName%.exe"
if errorlevel 1 exit /b %errorlevel%
"%sourceDir%%sourceName%.exe"
if errorlevel 1 exit /b %errorlevel%
echo.
pause
