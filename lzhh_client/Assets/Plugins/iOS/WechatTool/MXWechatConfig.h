#ifndef MXWechatConfig_h
#define MXWechatConfig_h

#import "WXApi.h"
#import "WXApiManager.h"
#import "MXWechatPayHandler.h"  //微信支付调用类
#import "MXWechatSignAdaptor.h" //微信签名工具类
#import "XMLDictionary.h"       //XML转换工具类

/**
 -----------------------------------
 微信支付需要配置的参数
 -----------------------------------
 */

// 开放平台登录https://open.weixin.qq.com的开发者中心获取APPID
#define MXWechatAPPID       @"wxafd936830b3cf60f"
// 开放平台登录https://open.weixin.qq.com的开发者中心获取AppSecret。
#define MXWechatAPPSecret   @"e72afcd7738d3fb3c6a6600f7a8f299f"
// 微信支付商户号
#define MXWechatMCHID       @"1449873902"
// 安全校验码（MD5）密钥，商户平台登录账户和密码登录http://pay.weixin.qq.com
// 平台设置的“API密钥”，为了安全，请设置为以数字和字母组成的32字符串。
#define MXWechatPartnerKey  @"sanyuanhy15618525339l88888888888"


/**
 -----------------------------------
 微信下单接口
 -----------------------------------
 */

#define kUrlWechatPay       @"https://api.mch.weixin.qq.com/pay/unifiedorder"


/**
 -----------------------------------
 统一下单请求参数键值
 -----------------------------------
 */

#define WXAPPID         @"appid"            // 应用id
#define WXMCHID         @"mch_id"           // 商户号
#define WXNONCESTR      @"nonce_str"        // 随机字符串
#define WXSIGN          @"sign"             // 签名
#define WXBODY          @"body"             // 商品描述
#define WXOUTTRADENO    @"out_trade_no"     // 商户订单号
#define WXTOTALFEE      @"total_fee"        // 总金额
#define WXEQUIPMENTIP   @"spbill_create_ip" // 终端IP
#define WXNOTIFYURL     @"notify_url"       // 通知地址
#define WXTRADETYPE     @"trade_type"       // 交易类型
#define WXPREPAYID      @"prepay_id"        // 预支付交易会话

#endif /* MXWechatConfig_h */
