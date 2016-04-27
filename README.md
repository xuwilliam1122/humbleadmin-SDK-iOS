#humbleadmin-SDK-iOS#
##简介##
	「humbleadmin-SDK-iOS」是华瑞网研所开发的 「可信 ID」SDK
	可提供 短信验证码登录 、 用户名和密码的注册和登录方法。
	
##配置##
使用本 `SDK` 时，项目需要满足以下要求。</br>
* 项目设置 要求 项目的 `Deployment Target` 在 `7.0` 以上 。</br>
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
`SDK` 共有五个头文件，分别为 `Trusty.h` `TrustyAuthConfig.h` `TrustySession.h` `TrustyUser.h` `TrustyKit.h`</br>

###Trusty.h###
	这个类中需要用户把从网站上获取到的项目信息在第一时间传给SDK。另外，实例化该类之后，可以获取终端用户之前登录的信息。
	
|名称|使用方法|
|---|---|
|+sharedInstance|`Trusty` 对象的单例方法，实例化 `Trusty` 对象时调用。|
|-currentSession|`Trusty` 实例化之后调用该方法，可获取终端用户的 `session` 信息。|
|-currentUser|`Trusty` 实例化之后调用该方法，可获取终端用户的 `user` 信息。|
|+setAppID:appSecret:|	设置 `AppID` 和 `AppSecret` 信息。|
|+getAppID	|获取 `AppID`。|
|+getAppSecret|获取 `AppSecret`。|

###TrustyAuthConfig.h###
	这个类是设置终端用户登录方法，以及传入用户名所要调用的类，使用前需要进行对象实例化。
|名称|使用方法|
|---|---|
|-initWithAuthenticateType:userName:|`TrustyAuthConfig` 对象的实例化方法，需要传入 `userName` 和 `authenticateType` 属性进行登录设置。|
|authenticateType|注册、登录、鉴权方式。|
|userName|终端用户的用户名。|

###TrustyUser.h###
	这个类是「可信 ID」的终端用户信返回类，开发者在调用用户登录方法时，传入初始化的该对象，请求成功后该对象就会附带有用户对应的信息包括 userID 、phoneNumber 和 email 三个属性。
|名称|使用方法|
|---|---|
|-init|`TrustyUser` 对象的实例化方法，对象实例化之后，可以对里面的 `userID` 、`phoneNumber` 、`emailAddress` 和 `userName` 的属性进行读取。|
|userID|用户的 UserID 信息。|
|phoneNumber|用户的手机号码信息。|
|emailAddress|用户的邮箱信息。|
|userName|用户注册后得到的用户名。|

###TrustySession.h###
	这个类是「可信 ID」的请求方法接口类，该类中包含 authToken 、 authConfig 和 trustyUser 三个属性，在请求结束后，该类的属性中都会获取到相应的值。
|名称|使用方法|
|---|---|
|-initWithTrustyAuthConfig:|`TrustySession` 对象实例化方法，需要传入 `TrustyAuthConfig` 对象。|
|-authenticate:block:|用户登录请求的接口，需要传入用户的 `TrustyUser` 对象（此项可以为 `nil`），</br>请求结束后会返回 `block` 信息，包括请求是否成功以及请求失败后的 `error` 信息。|
|-authenticateVerify:block:|进行短信息验证码登录请求之后，对返回的验证码进行验证的接口，需要传入短信验证码，</br>请求结束后会返回 `block` 信息，包括请求是否成功以及请求失败后的 `error` 信息。|
|-logout |登出`可信ID`。|
|authToken|向服务器进行登录请求时获取到的令牌。|
|authConfig|登录申请成功后，用户的 `TrustyAuthConfig` 属性信息。|
|trustyUser|登录申请成功后，用户的 `TrustyUser` 属性信息。|

###TrustyKit.h###
	这个类是「可信 ID」的 UI 类，调用里面的方法，会自动绘制 UI 界面，来实现相对应的接口功能。
|名称|使用方法|
|---|---|
|+smsLoginButton:|返回用于请求短信验证码登录的`按钮`，点击可以进行短信验证码登录的操作过程。</br>过程完成后会返回 `block` 信息，包括请求是否成功以及失败后的 `error` 信息。|
|+smsLoginWithCompletion:|调用这个方法会打开短信验证码登录`界面`，可以进行短信验证码登录操作过程。</br>过程完成后会返回 `block` 信息，包括请求是否成功以及失败后的 `error` 信息。|

 


 