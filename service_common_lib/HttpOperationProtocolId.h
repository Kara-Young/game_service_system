
/* author : limingfan
 * date : 2017.09.20
 * description : HTTP操作服务协议码ID定义
 */
 
#ifndef __HTTP_OPT_PROTOCOL_ID_H__
#define __HTTP_OPT_PROTOCOL_ID_H__


// HTTP操作服务协议ID
enum EHttpOperationProtocolId
{
	// 用户充值
	HTTPOPT_GET_RECHARGE_ORDER_REQ = 1,
	HTTPOPT_GET_RECHARGE_ORDER_RSP = 2,
	HTTPOPT_RECHARGE_RESULT_NOTIFY = 3,
	HTTPOPT_CANCEL_RECHARGE_NOTIFY = 4,
	
	// 微信登录
	HTTPOPT_WX_LOGIN_REQ = 5,
	HTTPOPT_WX_LOGIN_RSP = 6,
    
    // 给用户手机发送验证码（绑定手机号码功能）
	HTTPOPT_CHECK_PHONE_NUMBER_REQ = 7,
	HTTPOPT_CHECK_PHONE_NUMBER_RSP = 8,
};


#endif // __HTTP_OPT_PROTOCOL_ID_H__

