#include <iostream>
#include <gen/Service.grpc.pb.h>
#include <mylibrary/my_class.h>
#include <boost/regex.hpp>
#include <grpcpp/grpcpp.h>
int main()
{
  GOOGLE_PROTOBUF_VERIFY_VERSION;
  MyLibrary::MyClass myClass;
  std::cout << "Sum: 2+3=" << myClass.sum(2,3) << std::endl;
  grpc::Status ok;
  myClass.runServer("0.0.0.0:50051");
  return 0;
}