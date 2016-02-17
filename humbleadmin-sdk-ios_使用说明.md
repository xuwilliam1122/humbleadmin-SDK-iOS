# humbleadmin-SDK-iOS 使用说明 #
这里对使用本 `SDK` 进行详细说明，包括了如何在开发者社区进行项目创建，如何引用本 `SDK` 库，以及快速演示，使用本 `SDK` 库时发送请求如何获取到所需要的信息。下面我们就一步步的对项目申请到可以正常使用作出详细的说明。

## 开发者社区注册 ##
</br>
首先我们要来到`拙政云`的开发者社区界面<http://open.humbleadmin.io/>。点击进入后我们会看到这样的界面。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/1.png)</br>
</br>
对于第一次进入该网页的朋友你就需要进行用户的注册，如果是咱们`拙政云`的老朋友，你就可以跳过这一步了。</br>
</br>
用户注册很简单，你只需要点击上图中的注册按钮，就会来到这个界面中，简单的输入用户名密码并且确认密码后，你就成为了使用`拙政云`的新用户了。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/2.png)
</br>
`注：注册成功之后会自动跳入登录成功后的界面中。`
</br>

## 开发者社区使用 ##
### 项目创建 ###
经过了注册，你已经拥有了一个开发者社区的账号，接下来，你需要使用这个账户进行登录。登录成功之后咱们就可以创建咱们的第一个开发程序了。下面就是咱们登录成功之后所看到的界面。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/3.png)</br>

咱们这篇文档所讲述的是如何创建项目，所以其他功能就不多做赘述，有待各位开发者们自己去探究喽~。</br>
由于是新用户，所以咱们并没有什么项目在开发者社区中，所以咱们要创建一个新项目。如上图所示，点击创建新项目。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/4.png)</br>

这里的项目名称可以各位开发者随意命名，但建议所命名的项目名称与各位所开发项目的名称一致，从而方便管理。</br>
当我们点击完确定后，在界面中就会出现我们命名相同的一个项目，如下图</br>
![](http://7xnick.com1.z0.glb.clouddn.com/5.png)</br>
这是我们点击管理应用，就可以对咱们创建的应用项目进行管理。

### 项目信息 ###
进入管理应用界面后，我们可以看到如下界面</br>
![](http://7xnick.com1.z0.glb.clouddn.com/6.png)</br>
</br>
这个界面中我们点击设置就可以看到为我们产品所分配出的独立的产品安全信息
![](http://7xnick.com1.z0.glb.clouddn.com/7.png)</br>
而这些信息就是各位开发者在使用 `humbleadmin-SDK-iOS` 库初始时所需要抄录并传入到 `SDK` 中的产品安全信息。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/8.png)</br>
![](http://7xnick.com1.z0.glb.clouddn.com/9.png)</br>
![](http://7xnick.com1.z0.glb.clouddn.com/10.png)</br>
![](http://7xnick.com1.z0.glb.clouddn.com/11.png)</br>
`注：先记住这些信息哦~`

## humbleadmin-SDK-iOS 库的使用##
### 创建项目 ###
这一步对于各位开发者来说可以跳过，当然为了整个文档的清晰详细，我还是要在这里演示一下。很简单的项目创建，那么就跟随图片一步一步的进行创建
![](http://7xnick.com1.z0.glb.clouddn.com/12.png)</br>
![](http://7xnick.com1.z0.glb.clouddn.com/13.png)</br>
![](http://7xnick.com1.z0.glb.clouddn.com/14.png)</br>
前面分别是创建新项目，选择最简单的一个单页面项目，项目名我与在服务器上注册的产品命名为一样的。之后一步保存路径图片我就省略了。最后项目为
![](http://7xnick.com1.z0.glb.clouddn.com/15.png)</br>
这样，咱们的项目就创建好了。</br>

### cocoapods 获取 SDK ###
执行 `cocoapods` 的前提是各位开发者先安装 `cocoapods` ，至于安装过程这里就不赘述了，我们直接从初始化 `cocoapods` 开始。</br>
首先我们打开终端来到项目目录下</br>
![](http://7xnick.com1.z0.glb.clouddn.com/16.png)</br>
之后输入:

	pod init
	
</br>
![](http://7xnick.com1.z0.glb.clouddn.com/17.png)</br>
这样咱们的项目文件夹中就会生成一个 `Podfile` 文件</br>
![](http://7xnick.com1.z0.glb.clouddn.com/18.png)</br>
打开这个文件</br>
![](http://7xnick.com1.z0.glb.clouddn.com/19.png)</br>
在我们所需要的 `target` 处添加 `SDK` 包

	pod 'humbleadmin-SDK-iOS',:git=>'https://github.com/RNTD/humbleadmin-SDK-iOS.git'
	
这里最好直接复制，手动输入的时候`'`引号很容易出问题哦~
![](http://7xnick.com1.z0.glb.clouddn.com/20.png)</br>
在这里也可以进行指定版本号的 `SDK` 获取

	pod 'humbleadmin-SDK-iOS',:git=>'https://github.com/RNTD/humbleadmin-SDK-iOS.git', :tag => '0.5.1'
这样所获取到的就是 `SDK` 所指定的 `0.5.1` 版本的 `SDK`。
输入完成之后就是这个样子的，然后保存并退出回到终端处输入

	pod install
	
进行 `SDK` 的安装下载。这个可能需要几分钟，当然如果你的设备强大，并且网速给力的话几秒钟就能完事。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/21.png)</br>
安装完之后控制台会输出这些信息。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/22.png)</br>
而项目目录会变成这样</br>
![](http://7xnick.com1.z0.glb.clouddn.com/23.png)</br>
不要慌张，这样是正确的，从此往后咱们在打开项目进行编辑，就要打开 `TestDemo.xcworkspace` 文件来进行编辑了。打开后的项目结构是这样的</br>
![](http://7xnick.com1.z0.glb.clouddn.com/24.png)</br>
这样通过 `cocoapods` 获取 `SDK` 就完成了。

### SDK 的使用 ###
#### SDK 自身的使用 ####
`humbleadmin-SDK-iOS` 一共有九个头文件，他们分别承担了不同的功能，但是，无论使用什么功能，都必须先对 `AuthConfig.h` 中的属性进行设置，也就是将咱们从开发者社区中获取到的安全信息分别填写进去。</br>
在这个 Demo 中我就将这些信息写在了 `AppDelegate` </br>
![](http://7xnick.com1.z0.glb.clouddn.com/25.png)</br>
![](http://7xnick.com1.z0.glb.clouddn.com/26.png)</br>
这样咱们的`SDK`引入就完成了。</br>
下面咱们来实现一下`humbleadmin-SDK-iOS`库中由短信获取验证码，以及验证码验证的功能，这儿功能我就在 `ViewController` 中进行实现。</br>
在实现功能前，咱们先利用 `Main.storyboard` 简单绘制一个界面。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/27.png)</br>
个人习惯用 `iPhone6` 的模拟器进行测试，所以这里的尺寸选择的就是 `iPhone6` 的尺寸。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/28.png)</br>
当屏幕的大小变成这样之后，我们需要两个 `TextField` 控件和两个 `Button` 控件，直接拖拽上来就好。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/29.png)</br>
![](http://7xnick.com1.z0.glb.clouddn.com/30.png)</br>
调整一下位置，为了方便我再分别给它们进行了命名和 `placeholder` 的设置。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/31.png)</br>
下面要把这些控件和代码相关联，用快捷键

	option + command + return
打开双界面状态，这里右边的文件最好改成 `.h` 文件，这样会省却很多麻烦。之后选中控件，按住 `control` 进行拖拽，就会出现下图的效果</br>
![](http://7xnick.com1.z0.glb.clouddn.com/32.png)</br>
拖拽过去之后放手，进行命名即可。</br>
这里要特别说明一下，因为我们没有对按钮自定制的需求，所以在拖拽 `Button` 控件时我选择的是 `Action` 状态而不是 `Button`</br>
![](http://7xnick.com1.z0.glb.clouddn.com/33.png)</br>
之后在 `.h` 文件中加上我们需要引用的短信方法类 `#import <humbleadmin-SDK-iOS/TrustySMS.h>`
![](http://7xnick.com1.z0.glb.clouddn.com/34.png)</br>
这样 `.h` 文件部分就设置完成了。在 `.m` 文件中写下咱们需要的方法</br>
![](http://7xnick.com1.z0.glb.clouddn.com/36.png)</br>
这样，`SDK` 的使用就完成了。

#### SDK 环境的要求 ####
完成了 `SDK` 的添加及方法的调用，咱们就来尝试一下运行吧！</br>
![](http://7xnick.com1.z0.glb.clouddn.com/37.png)</br>
但当运行的时候会发现，很遗憾，咱们并不能实现功能。问题就出在 `iOS` 程序的安全性。</br>
`humbleadmin-SDK-iOS` 库中包含很多网络请求，所以在这里咱们需要对项目的 `plist` 文件进行设置，使项目允许进行网络申请。打开`plist`文件
![](http://7xnick.com1.z0.glb.clouddn.com/38.png)</br>
添加

	App Transport Security Settings
![](http://7xnick.com1.z0.glb.clouddn.com/39.png)</br>
再在 `App Transport Security Settings` 下添加</br>

	Allow Arbitrary Loads
并设置成 `YES`。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/41.png)</br>
这样，`plist` 文件设置就完成了，下面让我们在运行一次试试！！</br>
![](http://7xnick.com1.z0.glb.clouddn.com/42.png)</br>
我们发送的短信验证码申请返回值是 `200` ，并且所填写的手机号码对应手机会收到一条验证码短信，填写验证码后，进行验证码认证。</br>
![](http://7xnick.com1.z0.glb.clouddn.com/43.png)</br>
返回值是 `200` 时就可以获取到 `AuthToken`。方法如下</br>
![](http://7xnick.com1.z0.glb.clouddn.com/44.png)</br>
这样，`humbleadmin-SDK-iOS` 的最基本演示就到这了，如果还有其他问题可以与我们[联系](http://www.humbleadmin.io)。
