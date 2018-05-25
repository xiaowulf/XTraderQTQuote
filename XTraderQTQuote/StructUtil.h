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
	//������
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
//ʵʱ����������
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
//����Ʒ������
struct FuturesCodeAttr
{
	QString code;
	///����������
	QString	ExchangeID;
	///��Լ����
	QString	InstrumentName;
	///��Լ�ڽ������Ĵ���
	QString	ExchangeInstID;
	///��Ʒ����
	QString	ProductID;
	///��Ʒ����
	QString	ProductClass;
	///�������
	int	DeliveryYear;
	///������
	int	DeliveryMonth;
	///�м۵�����µ���
	int	MaxMarketOrderVolume;
	///�м۵���С�µ���
	int	MinMarketOrderVolume;
	///�޼۵�����µ���
	int	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	int	MinLimitOrderVolume;
	///��Լ��������
	int	VolumeMultiple;
	///��С�䶯��λ
	double	PriceTick;
	///������
	QString	CreateDate;
	///������
	QString	OpenDate;
	///������
	QString	ExpireDate;
	///��ʼ������
	QString	StartDelivDate;
	///����������
	QString	EndDelivDate;
	///��Լ��������״̬
	QString	InstLifePhase;
	///��ǰ�Ƿ���
	int	IsTrading;
	///�ֲ�����
	QString	PositionType;
	///�ֲ���������
	QString	PositionDateType;
	///��ͷ��֤����
	double	LongMarginRatio;
	///��ͷ��֤����
	double	ShortMarginRatio;
	///�Ƿ�ʹ�ô��߱�֤���㷨
	QString	MaxMarginSideAlgorithm;
	///������Ʒ����
	QString	UnderlyingInstrID;
	///ִ�м�
	double	StrikePrice;
	///��Ȩ����
	QString	OptionsType;
	///��Լ������Ʒ����
	double	UnderlyingMultiple;
	///�������
	QString	CombinationType;
};

struct TradingAccountField
{
public:
	TradingAccountField()
	{
		qRegisterMetaType<TradingAccountField>("TradingAccountField");
	}
	///���͹�˾����
	QString	BrokerID;
	///Ͷ�����ʺ�
	QString	AccountID;
	///�ϴ���Ѻ���
	double	PreMortgage;
	///�ϴ����ö��
	double	PreCredit;
	///�ϴδ���
	double	PreDeposit;
	///�ϴν���׼����
	double	PreBalance;
	///�ϴ�ռ�õı�֤��
	double	PreMargin;
	///��Ϣ����
	double	InterestBase;
	///��Ϣ����
	double	Interest;
	///�����
	double	Deposit;
	///������
	double	Withdraw;
	///����ı�֤��
	double	FrozenMargin;
	///������ʽ�
	double	FrozenCash;
	///�����������
	double	FrozenCommission;
	///��ǰ��֤���ܶ�
	double	CurrMargin;
	///�ʽ���
	double	CashIn;
	///������
	double	Commission;
	///ƽ��ӯ��
	double	CloseProfit;
	///�ֲ�ӯ��
	double	PositionProfit;
	///�ڻ�����׼����
	double	Balance;
	///�����ʽ�
	double	Available;
	///��ȡ�ʽ�
	double	WithdrawQuota;
	///����׼����
	double	Reserve;
	///������
	QString	TradingDay;
	///������
	int	SettlementID;
	///���ö��
	double	Credit;
	///��Ѻ���
	double	Mortgage;
	///��������֤��
	double	ExchangeMargin;
	///Ͷ���߽��֤��
	double	DeliveryMargin;
	///���������֤��
	double	ExchangeDeliveryMargin;
	///�����ڻ�����׼����
	double	ReserveBalance;
	///���ִ���
	QString	CurrencyID;
	///�ϴλ���������
	double	PreFundMortgageIn;
	///�ϴλ����ʳ����
	double	PreFundMortgageOut;
	///����������
	double	FundMortgageIn;
	///�����ʳ����
	double	FundMortgageOut;
	///������Ѻ���
	double	FundMortgageAvailable;
	///����Ѻ���ҽ��
	double	MortgageableFund;
	///�����Ʒռ�ñ�֤��
	double	SpecProductMargin;
	///�����Ʒ���ᱣ֤��
	double	SpecProductFrozenMargin;
	///�����Ʒ������
	double	SpecProductCommission;
	///�����Ʒ����������
	double	SpecProductFrozenCommission;
	///�����Ʒ�ֲ�ӯ��
	double	SpecProductPositionProfit;
	///�����Ʒƽ��ӯ��
	double	SpecProductCloseProfit;
	///���ݳֲ�ӯ���㷨����������Ʒ�ֲ�ӯ��
	double	SpecProductPositionProfitByAlg;
	///�����Ʒ��������֤��
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
