# Unreal Engine 4 Protobuf Example

## Overview
The directory `Source/ThirdParty/protobuf` contains the includes and libraries for protobuf (just copied) as well as a build script that adds these and also defined `GOOGLE_PROTOBUF_NO_RTTI=1` to disable RTTI. `Source/ProtobufExample` contains the generated code based on the [address book example](https://github.com/protocolbuffers/protobuf/blob/master/examples/addressbook.proto). The generated c++ file had some warnings disabled to make it compile as UE4 treats these as errors. 

```
#pragma warning(disable: 4125)
#pragma warning(disable: 4668)
#pragma warning(disable: 4577)
```

Furthermore because of a bug in UE4 4.21 the source file had its extension renamed from .cc to .cpp, although this is not necessary anymore in 4.22. `Source/ProtobufExample/ProtobufExampleGameModeBase.cpp` contains code making use of the address book class.

## Remarks
Currently only contains binaries for Windows 64 bit.