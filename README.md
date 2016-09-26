# PrivacyPermissionsManager
iOS10适配权限问题，用来管理用户更改权限导致程序crash的问题。
具体代码用法：
 if ([PrivacyPermissionsManager fxwIsOpenCamera]) 
 {
        timer = [NSTimer scheduledTimerWithTimeInterval:0.02 target:self selector:@selector(animation1) userInfo:nil    repeats:YES];
        settingLab.hidden = YES;
 }
 else
 {
        [imageView removeFromSuperview];
        [line removeFromSuperview];
        settingLab.hidden = NO;
        self.view.backgroundColor = kBackgroudColor;
  }
