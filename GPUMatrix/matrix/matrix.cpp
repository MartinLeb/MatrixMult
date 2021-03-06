#include <iostream>

#include <ocl_wrapper.h>
#include <utl_utils.h>
#ifdef __APPLE__
#include <OpenCL/opencl.h>
#else
#include <CL/opencl.h>
#endif


int main()
{
    // Copy&Paste from some example
    ocl::Platform platform(ocl::device_type::GPU);
    ocl::Device device = platform.device(ocl::device_type::GPU);

    //std::cout << "Printing platform" << std::endl;
    platform.print(false, true, true, true, true, false);

    std::cout << "Device name: " << device.name() << std::endl;

    std::cout << "Number of compute units: " << device.maxComputeUnits() << std::endl;
    std::cout << "Number of maximum work item sizes: " << utl::toString(device.maxWorkItemSizes()) << std::endl;
    std::cout << "Size of global memory in GiBytes: "  << (double(device.globalMemSize()) / double(1<<30)) << std::endl;
    std::cout << "Size of local memory in KiBytes: "   << (double(device.localMemSize()) / double(1<<10)) << std::endl;
    std::cout << "Size of local memory in GiBytes: "   << (double(device.maxMemAllocSize()) / double(1<<30)) << std::endl;
	
    std::string s;
    device.isCpu() ? s = "CPU!" : s = "GPU!";
    std::cout << "Device is a " << s << std::endl;

	return 0;
}
