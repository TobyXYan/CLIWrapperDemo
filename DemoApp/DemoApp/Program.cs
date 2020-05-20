using CLIWrapper;
using System;

namespace DemoApp
{
    class Program
    {
        static void Main(string[] args)
        {
            var cliWrapper = new TargetCppCLIWrapper();
            byte[] x = cliWrapper.GetByteArray();
            Console.WriteLine("Hello World!");
        }
    }
}
