#humbleadmin-SDK-iOS#
##简介##
	humbleadmin-SDK-iOS 是华瑞网研所开发的 可信ID SDK
	可提供 短信链接登录 和 验证码登录 以及 相关联的 APP 间 SSO 登录的功能
	
##配置##
使用本 SDK 时，项目需要满足以下要求。</br>
* 项目设置 要求 项目的 Deployment Target 在 7.0 以上 。</br>
* 项目设置 需要 项目在自身的 `.plist` 文件中添加 `App Transport Security Settings` 并在该项中加入 `Allow Arbitrary Loads` 将其值设置为 `YES` 。
* 项目设置 需要 项目在自身的 `.plist` 文件中 `URL types` 项内添加由 `humbleadmin.io` 中获取到的 `App Schema`。
	
##项目结构##
|文件名|用途|
|---|---|
|doc|本项目`API`,进入文件夹双击`index.html`查阅。|
|humbleadmin-SDK-iOS.podspec|支持`cocoapods`引用的项目文件。|
|iOS|`SDK`存放位置，`iOS/Framework`下即为`SDK`。|
|humbleadmin-sdk-ios_使用说明|`SDK` 使用的快速入门使用说明。|
|LICENSE|许可证书。|
|README.md|说明文档。|

##使用说明##
`SDK` 共有九个头文件，分别为 `AuthConfig.h` `Trusty.h` `TrustySMS.h` `TrustySso.h` `TrustyRegistration.h` `TrustySession.h` `TrustyUserInfo.h` `TrustyForgotPassword.h` `TrustyKit`</br>
###AuthConfig.h###
	这个类中需要用户把从网站上获取到的项目信息在第一时间传给SDK。
|名称|使用方法|
|---|---|
|+setAppID:appSecret:|	设置 AppID 和 AppSecret 信息。|
|+getAppID	|获取 AppID。|
|+getAppSecret|获取 AppSecret。|
|+setAppSchema:|设置 AppSchema。|
|+getAppSchema|获取 AppSchema。|
|+setUSCOpenIDPort:|设置 USC OpenID 端口|
|+getUSCOpenIDPort|获取 USC OpenID 端口|

###Trusty.h###
	这个类是 TrustySMS.h 和 TrustySso.h 的父类，它记录了当前请求 可信ID 登录的手机号码和获取到的 AuthToken ，并且实现了 可信ID 的登出功能
|名称|使用方法|
|---|---|
|+getPhoneNumber|获取申请`可信ID`登录的手机号码。|
|+getAuthToken|获取已经获得的 AuthToken 信息。|
|+getUserID|获取当前登录用户的 UserID 。|
|+logout |登出`可信ID`。|

###TrustySMS.h###
	这个类是 Trusty.h 的子类，它实现了 可信ID 的登录功能，即输入手机号码进行 可信ID 登录申请
|名称|使用方法|
|---|---|
|+authenticateWithSMSCode:completion:|通过回填短信验证码的方法获取 `AuthToken` 的请求，返回申请是否成功的状态。|
|+authenticateWithSMSURL:completion:|通过短信链接的方法获取 `AuthToken` 的请求，返回申请是否成功的状态。|
|+verify:completion: |传入短信下发回来的验证码，验证是否可以获取到 `AuthToken`，返回申请是否成功的状态。|


###TrustySso.h###
	这个类是 Trusty.h 的子类，它实现了 可信ID 的 SSO 登录功能，实现了两个友好 App 间进行 SSO 登录的功能。（注：友好 App 指两个都在 humbleadmin.io 上注册过的，且互相把对方 AppSchema 添加到 .plist 文件中的白名单内。）
|名称|使用方法|
|---|---|
|+loginBySso|`SSO`登录方法，执行该方法时应先设置白名单，即执行`+setWhiteList:`。|
|+returnRequestApp:|`友好 App`放执行的跳回方法，只要传入获取到的`openURL`信息即可。|
|+verifySSO:completion:|由`友好 App`跳回时执行的方法，只要传入获取到的`openURL`信息即可，返回验证后所获取到的信息，正确即可获取`AuthToken`,失败返回失败信息。|
|+setWhiteList:|传入白名单到`SDK`，即`友好 App`的`App Schema`.|

###TrustyRegistration.h###
	这个类是用户在客户端上注册所用的接口类，提供了 可信ID 用户注册的功能。
|名称|使用方法|
|---|---|
|+registrationWithUserName:password:completion:|通过传入注册的用户名（手机号码或邮箱）、密码来进行用户注册，返回注册请求是否成功的状态。|
|+registrationVerify:completion:|输入注册成功之后返回的验证码，进行的账户验证，并激活接口。返回激活申请是否成功的状态。|
	
###TrustySession.h###
	这个类是 Trusty.h 的子类，它实现了终端用户使用注册的用户名和密码进行登录的请求接口类。
|名称|使用方法|
|---|---|
|+sessionWithUserName:password:completion:|通过传入已经注册过的用户名及正确的密码进行登录的接口，返回登录请求是否成功的状态。|

###TrustyUserInfo.h###
	这个类是 Trusty.h 的子类，它实现了用户进行用户信息设置和用户信息获取的接口方法，要调用这两个接口的前提是用户必须处于登录状态。
|名称|使用方法|
|---|---|
|+getUserInfo:|获取当前用户的用户信息接口，调用该接口，用户信息会在返回值中获取到。|
|+setUserInfo:completion:|设置当前用户的用户信息接口，传入用户信息后会在返回值中返回设置用户信息是否成功的状态。|

###TrustyForgotPassword.h###
	这个类是 Trusty.h 的子类，它实现了用户重置密码的功能。
|名称|使用方法|
|---|---|
|+forgotPassword:completion:|通过传入用户账号，进行密码重置的申请，返回重置申请是否成功的状态，并且会对申请重置的用户名是手机号还是邮箱进行区分，返回验证码。|
|+resetPassword:code:completion:|通过返回的验证码和新密码设置，进行密码重置申请，返回修改密码是否成功的状态。|

###TrustyKit.h###
	这个类是 可信ID 的 UI 类，调用里面的方法，会自动绘制 UI 界面，来实现相对应的接口功能。
|名称|使用方法|
|---|---|
|+smsCodeLoginWithDeafultUI|调用这个方法，会打开一个请求短信验证码的界面，可以进行短信验证码登录的操作。|
|+customLoginWithDefaultUI|调用这个方法，会打开一个用户名、密码登录的界面，可以进行用户名、密码登录的操作。|
|+registerWithDefaultUI|调用这个方法，会打开一个用户名、密码注册的界面，可以进行用户名、密码注册的操作。|
|+forgotPwdWithDefaultUI|调用这个方法，会打开一个重置密码的界面，可以进行密码重置的操作。|

 


 