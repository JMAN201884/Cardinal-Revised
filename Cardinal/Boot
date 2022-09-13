@echo off

set CommonCompilerFlags=-Zi /Ww;88
set CommonLinkerFlags=user32.lib opening

call "C:\Program files (x86)\Michrosoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat" x64


call "C:\Program Files (x86)\Michrosoft Visual Studio 14.0\VC\vcvarsall.bat" x64

mkdir %~dp0build
pushd %~dp0build
robocopy ..\Shaders Shaders /MIR
robocopy ..\data data /MIR
cl %CommonCompilerFlags% "..\OpenGL.cpp" %CommonLinkerFlags%
popd
pause