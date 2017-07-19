//
//  src/mach-o/header/filetype.h
//  tbd
//
//  Created by inoahdev on 4/24/17.
//  Copyright © 2017 inoahdev. All rights reserved.
//

#pragma once

namespace macho {
    enum class filetype {
        object,
        executable,
        fvmlib,
        core,
        preloaded_executable,
        dylib,
        dylinker,
        bundle,
        dylib_stub,
        dsym,
        kext
    };
}
