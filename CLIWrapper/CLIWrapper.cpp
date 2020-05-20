#include "pch.h"
#include "CLIWrapper.h"
using namespace System;

CLIWrapper::TargetCppCLIWrapper::TargetCppCLIWrapper()
{
	if (m_Instance != nullptr)
		delete m_Instance;
	m_Instance = new Fox();
}

cli::array<System::Byte>^ CLIWrapper::TargetCppCLIWrapper::GetByteArray()
{
	BYTE* byteArray = new BYTE[10];
	cli::array<System::Byte>^ outArray = gcnew cli::array<System::Byte>(10);
	m_Instance->GetByteList(byteArray);
	for (int i = 0; i < 10; i++)
		outArray[i] = byteArray[i];
	delete[] byteArray;
	return outArray;
}


CLIWrapper::TargetCppCLIWrapper::~TargetCppCLIWrapper()
{
	delete m_Instance;
	m_Instance = NULL;
}
