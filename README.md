# SharedMemInterface
Interface providing applications read and write access to shared memory on target/host.

## Implementation
### Storage
Use [Boost Shared Mem](https://theboostcpplibraries.com/boost.interprocess-shared-memory) to store the data. Data can be in various forms: bool, int, double, string, object. Objects will be stored as JSON strings. Hopefully a conversion to tuple can be done or some other format. 
### Callbacks
Subscribing to shared memory is crucial, to create an event a Named Pipe is created with shared memory key which creates a callback in processes subscribint to this key. 
Maybe use threads ?
## Created with
https://github.com/bast/gtest-demo
