

#import <UIKit/UIKit.h>
#import "CLCircleView.h"
#import "UIView+Frame.h"
#import "SPGripViewBorderView.h"

@protocol CLStickerToolDelegate;

@interface CLStickerView : UIView{
    SPGripViewBorderView *borderView;
}
@property (readwrite) CGFloat scaleValue;
+ (void)setActiveStickerView:(CLStickerView*)view;
- (UIImageView*)imageView;
- (id)initWithImage:(UIImage *)image;
- (void)setScale:(CGFloat)scale;
@property (strong, nonatomic) id <CLStickerToolDelegate> delegate;
@end

@protocol CLStickerToolDelegate <NSObject>
@required
@optional
- (void)CLStickerToolDidBeginEditing:(CLStickerView *)sticker;
- (void)CLStickerToolDidClose:(CLStickerView *)sticker;
-(void)CLStickerToolDidEndEditing:(CLStickerView*)sticker;
@end

