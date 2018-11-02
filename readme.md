This depot contains source code to demonstrate how to redirect all memory allocations
done by the STL so that you can intercept them, track them, and call you own
custom alloctor

Tracking versions of the STL containers are all in the 'stdt' namespace

This sample code was created by Chris Dannemiller and John W. Ratcliff and
released completely open source under the MIT license.

The official github location is here:

https://github.com/jratcliff63367/stltracking

You can contact John W. Ratcliff at mailto:jratcliffscarab@gmail.com

To use this in your application, simply include the 'tracking' version
of the header file corresponding to the container you want to use.

To use your own custom allocator, simply edit the 'allocate' and 'deallocate'
methods in 'stl_tracking.h'

Example usage:
-------------------------------------
#include "vector_tracking.h"

stdt::vector< int > intVector;
