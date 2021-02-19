classdump-dyld
==============
This is a fork from  @limneos's great [classdump-dyld](https://github.com/limneos/classdump-dyld).

I need a classdump to check some frameworks on a MacBook Pro M1 2020. Big Sur put frameworks into dyld_shared_cache.
So far it seems classdump-dyld is the most convenient tool.

Since I only need it on macOS, I got rid of theos related stuff and made it compile with old make on macOS.


License
-----------
The original license is GPLv3.


Environment
-----------
I only tested it on Big Sur x86_64 and m1.
