#pragma once
//Should set Common Language Support as \clr instead of \clr:net core
#include "Fox.h"

using namespace System;

namespace CLIWrapper {
	public ref class TargetCppCLIWrapper
	{
	public:
		TargetCppCLIWrapper();
		virtual ~TargetCppCLIWrapper();
		cli::array<System::Byte>^ GetByteArray();
		// TODO: Add your methods for this class here.
	protected:
		Fox* m_Instance;
	};
}
