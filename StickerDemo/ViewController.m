

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)btnAddStickerClicked:(id)sender {
    
    CLStickerView *view = [[CLStickerView alloc] initWithImage:[UIImage imageNamed:@"pokemon"]];
    view.delegate =self;
    CGFloat ratio = MIN( (0.5 * self.view.width) / view.width, (0.5 * self.view.height) / view.height);
    [view setScale:ratio];
    view.center = CGPointMake(self.view.width/2, self.view.height/2);
    [self.view addSubview:view];
    
}

@end
