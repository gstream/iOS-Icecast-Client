//
//  MyAudioWindow.h
//  MicInput
//
//  Created by Gstream on 21.09.15.
//  Copyright (c) 2011 http://www.stefanpopp.de/2011/capture-iphone-microphone/ . All rights reserved.
//

#import <UIKit/UIKit.h>
@class AudioProcessor;

@interface MyAudioViewController : UIViewController {

}
@property (retain, nonatomic) IBOutlet UISwitch *audioSwitch;
@property (retain, nonatomic) IBOutlet UILabel *gainValueLabel;
@property (retain, nonatomic) AudioProcessor *audioProcessor;
@property (retain, nonatomic) IBOutlet UILabel *topLabel;

// actions
- (IBAction)riseGain:(id)sender;
- (IBAction)lowerGain:(id)sender;
- (IBAction)audioSwitch:(id)sender;

// ui element manipulation
- (void)setGainLabelValue:(float)gainValue;
- (void)showLabelWithText:(NSString*)labelText;

@end
