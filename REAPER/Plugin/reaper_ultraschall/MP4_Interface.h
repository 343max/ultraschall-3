////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) Ultraschall (http://ultraschall.fm)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
////////////////////////////////////////////////////////////////////////////////

#ifndef __ULTRASCHALL_REAPER_MP4_INTERFACE_H_INCL__
#define __ULTRASCHALL_REAPER_MP4_INTERFACE_H_INCL__

#include "MP4_EncodingSession.h"

namespace ultraschall { namespace reaper {

HRESULT MP4CreateMediaSource(PCWSTR pszURL, IMFMediaSource **ppSource);

HRESULT MP4GetSourceDuration(IMFMediaSource *pSource, MFTIME *pDuration);

HRESULT MP4CreateVideoProfile(DWORD index, IMFAttributes **ppAttributes);

HRESULT MP4CreateAudioProfile(DWORD index, IMFAttributes **ppAttributes);

HRESULT MP4CreateTranscodingProfile(IMFTranscodeProfile **ppProfile);

HRESULT MP4RunEncodingSession(MP4EncodingSession *pSession, MFTIME duration);

HRESULT MP4EncodeFile(PCWSTR pszInput, PCWSTR pszOutput);

}}

#endif // #ifndef __ULTRASCHALL_REAPER_MP4_INTERFACE_H_INCL__
