#ifndef STRUCTUTIL_H
#define STRUCTUTIL_H
#include <QString>
#include <qvariant.h>
#include <QMetaType>
struct ConfigStruct
{
	QString frontaddr;
	QString tradeaddr;
	QString investor;
	QString pwd;
	QString brokerid;
	QString settingfile;
	QString quote_file_dir;
	QString futures_db_file;
	QString futures_db_name;
	QString quoteconfigfile;
};

struct FuturesStrategy
{
	int id;
	QString name;
	QString is_use;
	double qcqy;
	double drqy;
	double srqy;
	int initdate;
	int record_date;
	double kyzj;

};
struct FuturesPrice
{
	int id;
	int code_id;
	QString name="";
	QString code = "";
	double highprice = 0.0;
	double lowprice = 0.0;
	double openprice = 0.0;
	double closeprice = 0.0;
	double jsjprice = 0.0;
	int record_date = 0;
	double volume = 0.0;
	double ccvolume = 0.0;
	//交易所
	QString jys = "";
	double buy1 = 0.0;
	double buy1qty = 0.0;
	double sell1 = 0.0;
	double sell1qty = 0.0;
	double quantity = 0.0;
	double bf = 0.0;
	double day20max = 0.0;
	double day20min = 0.0;
	double PreClosePrice = 0.0;
	double PreSettlementPrice = 0.0;
	QString UpdateTime = "";
public:
	FuturesPrice()
	{
		qRegisterMetaType<FuturesPrice>("FuturesPrice");
	}
};
//实时的行情数据
struct FuturesRealPrice
{
	QString code = "";
	double highprice = 0.0;
	double lowprice = 0.0;
	double openprice = 0.0;
	double closeprice = 0.0;
	int record_date = 0;
	double volume = 0.0;
	double ccvolume = 0.0;
};

struct FuturesCodeConfig
{
	QString code = "";
	QString mon1 = "";
	QString mon2 = "";
	QString mon3 = "";
	int quantity = 0;
	QString jys = "";
};
struct Futures20MaxMin
{
	double minvalue = 0.0;
	double maxvalue = 0.0;

};

struct CrjDetail
{
	int id;
	QString strategyName = "";
	QString type = "";
	double money=0.0;
	int record_date=0;
	int strategy_id = 0;
};

struct FuturesResult
{
	int id;
	QString strategyName = "";
	QString type = "";
	double drqy = 0.0;
	double srqy = 0.0;
	double sharp = 0.0;
	double dwjz = 0.0;
	double ljyle = 0.0;
	double kyzj = 0.0;
	double bzj = 0.0;
	double bzjratio = 0.0;
 	int record_date = 0;
	double qcqy = 0.0;
	int strategy_id =0 ;

};

struct FuturesSignal
{
	int id=0;
	QString strategyName = "";
	QString code = "";
	double bf = 0.0;
	double srqy = 0.0;
	double day20max = 0.0;
	double day20min = 0.0;
	double predict_loss = 0.0;
	double open_price = 0.0;
	double add_price = 0.0;
	double stop_price = 0.0;
	int record_date = 0;
	QString record_time = "";
	int strategy_id = 0;
	int status = 0;
	QString fangxiang = "";

};

struct FuturesOrder
{
	int id=0;
	int record_date = 0;
	QString record_time = "";
	QString code = "";
	double open_price = 0.0;
	double add_price = 0.0;
	double stop_price = 0.0;
	int hand = 0;
	int strategy_id = 0;
	int status = 0;
	QString fangxiang = "";
	int remain_hand = 0;
	double remain_profit = 0.0;
	double risk = 0.0;
	QString fund_account = "";
	QString strategyName = "";
	double atr = 0.0;
	double max_loss = 0.0;
};

struct FuturesOrder2
{
	int id = 0;
	int record_date = 0;
	QString record_time = "";
	QString code = "";
	double open_price = 0.0;
	double add_price = 0.0;
	double stop_price = 0.0;
	int hand = 0;
	int strategy_id = 0;
	int status = 0;
	QString fangxiang = "";
	int remain_hand = 0;
	double remain_profit = 0.0;
	double risk = 0.0;
	QString fund_account = "";
	QString strategyName = "";
	double atr = 0.0;
public:
	FuturesOrder2()
	{
		qRegisterMetaType<FuturesOrder2>("FuturesOrder2");
	}
};

struct FuturesClose
{
public:
	FuturesClose()
	{
		qRegisterMetaType<FuturesClose>("FuturesClose");
	}
	int id = 0;
	int record_date = 0;
	QString code = "";
	int hand = 0;
	double open_price = 0.0;
	double close_price = 0.0;
	double close_profit = 0.0;
	int strategy_id = 0;
	QString fangxiang = "";
	QString fangxiang_c = "";
	QString record_time = "";
	int open_id = 0;
	QString fund_account = "";
	QString strategyName = "";
};
//交易品种属性
struct FuturesCodeAttr
{
	QString code;
	///交易所代码
	QString	ExchangeID;
	///合约名称
	QString	InstrumentName;
	///合约在交易所的代码
	QString	ExchangeInstID;
	///产品代码
	QString	ProductID;
	///产品类型
	QString	ProductClass;
	///交割年份
	int	DeliveryYear;
	///交割月
	int	DeliveryMonth;
	///市价单最大下单量
	int	MaxMarketOrderVolume;
	///市价单最小下单量
	int	MinMarketOrderVolume;
	///限价单最大下单量
	int	MaxLimitOrderVolume;
	///限价单最小下单量
	int	MinLimitOrderVolume;
	///合约数量乘数
	int	VolumeMultiple;
	///最小变动价位
	double	PriceTick;
	///创建日
	QString	CreateDate;
	///上市日
	QString	OpenDate;
	///到期日
	QString	ExpireDate;
	///开始交割日
	QString	StartDelivDate;
	///结束交割日
	QString	EndDelivDate;
	///合约生命周期状态
	QString	InstLifePhase;
	///当前是否交易
	int	IsTrading;
	///持仓类型
	QString	PositionType;
	///持仓日期类型
	QString	PositionDateType;
	///多头保证金率
	double	LongMarginRatio;
	///空头保证金率
	double	ShortMarginRatio;
	///是否使用大额单边保证金算法
	QString	MaxMarginSideAlgorithm;
	///基础商品代码
	QString	UnderlyingInstrID;
	///执行价
	double	StrikePrice;
	///期权类型
	QString	OptionsType;
	///合约基础商品乘数
	double	UnderlyingMultiple;
	///组合类型
	QString	CombinationType;
};

struct TradingAccountField
{
public:
	TradingAccountField()
	{
		qRegisterMetaType<TradingAccountField>("TradingAccountField");
	}
	///经纪公司代码
	QString	BrokerID;
	///投资者帐号
	QString	AccountID;
	///上次质押金额
	double	PreMortgage;
	///上次信用额度
	double	PreCredit;
	///上次存款额
	double	PreDeposit;
	///上次结算准备金
	double	PreBalance;
	///上次占用的保证金
	double	PreMargin;
	///利息基数
	double	InterestBase;
	///利息收入
	double	Interest;
	///入金金额
	double	Deposit;
	///出金金额
	double	Withdraw;
	///冻结的保证金
	double	FrozenMargin;
	///冻结的资金
	double	FrozenCash;
	///冻结的手续费
	double	FrozenCommission;
	///当前保证金总额
	double	CurrMargin;
	///资金差额
	double	CashIn;
	///手续费
	double	Commission;
	///平仓盈亏
	double	CloseProfit;
	///持仓盈亏
	double	PositionProfit;
	///期货结算准备金
	double	Balance;
	///可用资金
	double	Available;
	///可取资金
	double	WithdrawQuota;
	///基本准备金
	double	Reserve;
	///交易日
	QString	TradingDay;
	///结算编号
	int	SettlementID;
	///信用额度
	double	Credit;
	///质押金额
	double	Mortgage;
	///交易所保证金
	double	ExchangeMargin;
	///投资者交割保证金
	double	DeliveryMargin;
	///交易所交割保证金
	double	ExchangeDeliveryMargin;
	///保底期货结算准备金
	double	ReserveBalance;
	///币种代码
	QString	CurrencyID;
	///上次货币质入金额
	double	PreFundMortgageIn;
	///上次货币质出金额
	double	PreFundMortgageOut;
	///货币质入金额
	double	FundMortgageIn;
	///货币质出金额
	double	FundMortgageOut;
	///货币质押余额
	double	FundMortgageAvailable;
	///可质押货币金额
	double	MortgageableFund;
	///特殊产品占用保证金
	double	SpecProductMargin;
	///特殊产品冻结保证金
	double	SpecProductFrozenMargin;
	///特殊产品手续费
	double	SpecProductCommission;
	///特殊产品冻结手续费
	double	SpecProductFrozenCommission;
	///特殊产品持仓盈亏
	double	SpecProductPositionProfit;
	///特殊产品平仓盈亏
	double	SpecProductCloseProfit;
	///根据持仓盈亏算法计算的特殊产品持仓盈亏
	double	SpecProductPositionProfitByAlg;
	///特殊产品交易所保证金
	double	SpecProductExchangeMargin;
};

struct FuturesSetting
{
	int id = 0;
	int record_date = 0;
	QString fund_account;
	int is_sus_orders_confirm;
};;
#endif
