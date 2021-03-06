/*
 Copyright (c) 2015, Bruce Duncan. All rights reserved.
 
 Redistribution and use in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:
 
 1.  Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.
 
 2.  Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation and/or
 other materials provided with the distribution.
 
 3.  Neither the name of the copyright holder(s) nor the names of any contributors
 may be used to endorse or promote products derived from this software without
 specific prior written permission. No license is granted to the trademarks of
 the copyright holders even if such marks are included in this software.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#import <ResearchKit/ResearchKit.h>


/**
 The `ORKImageCaptureStep` class represents a step that captures an image via the device
 camera.  A template image can optionally be overlaid the camera preview to assist in properly
 capturing the image.
 
 To use the image capture step, optionally set the `templateImage` and `templateImageInsets`
 properties, incorporate the step into a task, and present the task with a task view controller.
 */
ORK_CLASS_AVAILABLE
@interface ORKImageCaptureStep : ORKStep

/**
 An image to be displayed over the camera preview.
 
 The image will be stretched to fit the available space while retaining its aspect ratio.
 When choosing a size for this asset, be sure to take into account the variations in device
 form factors.
 */
@property (nonatomic, strong) UIImage *templateImage;

/**
 Insets to be used in positioning and sizing the `templateImage`.
 
 The insets are interpreted as percentages relative to the preview frame size.  The `left`
 and `right` insets are relative to the width of the preview frame.  The `top` and `bottom`
 insets are relative to the height of the preview frame.
 */
@property (nonatomic) UIEdgeInsets templateImageInsets;

@end
