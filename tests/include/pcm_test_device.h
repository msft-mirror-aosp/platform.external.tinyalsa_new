/* pcm_test.h
**
** Copyright 2020, The Android Open Source Project
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are met:
**     * Redistributions of source code must retain the above copyright
**       notice, this list of conditions and the following disclaimer.
**     * Redistributions in binary form must reproduce the above copyright
**       notice, this list of conditions and the following disclaimer in the
**       documentation and/or other materials provided with the distribution.
**     * Neither the name of The Android Open Source Project nor the names of
**       its contributors may be used to endorse or promote products derived
**       from this software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY The Android Open Source Project ``AS IS'' AND
** ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
** IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
** ARE DISCLAIMED. IN NO EVENT SHALL The Android Open Source Project BE LIABLE
** FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
** DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
** SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
** CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
** LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
** OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
** DAMAGE.
*/

#ifndef TINYALSA_TESTS_PCM_TEST_H_
#define TINYALSA_TESTS_PCM_TEST_H_

namespace tinyalsa {
namespace testing {

#ifndef TEST_LOOPBACK_CARD
#define TEST_LOOPBACK_CARD 2
#endif

#ifndef TEST_LOOPBACK_PLAYBACK_DEVICE
#define TEST_LOOPBACK_PLAYBACK_DEVICE 0
#endif

#ifndef TEST_LOOPBACK_CAPTURE_DEVICE
#define TEST_LOOPBACK_CAPTURE_DEVICE 1
#endif

constexpr unsigned int kLoopbackCard = TEST_LOOPBACK_CARD;
constexpr unsigned int kLoopbackPlaybackDevice = TEST_LOOPBACK_PLAYBACK_DEVICE;
constexpr unsigned int kLoopbackCaptureDevice = TEST_LOOPBACK_CAPTURE_DEVICE;

} // namespace testing
} // namespace tinyalsa

#endif
