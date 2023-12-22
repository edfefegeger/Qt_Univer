USE [QTDataBase];

--�����
CREATE TABLE [Price]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[Price] INT CHECK([Price] > 0 AND [Price] < 100000) NOT NULL
)
--������� ���������
CREATE TABLE [Units]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(50) CHECK(Len([ShortName]) < 100000 AND [ShortName] LIKE '[A-Z]%') NOT NULL
)
--��������������
CREATE TABLE [Characteristic]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(50) CHECK(Len([ShortName]) < 100000 AND [ShortName] LIKE '[A-Z]%') NOT NULL
)
--�����
CREATE TABLE [Product]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(50) CHECK(Len([ShortName]) < 100000 AND [ShortName] LIKE '[A-Z]%') NOT NULL
)
--������� ���������
CREATE TABLE [InvoicePosition]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Count] INT CHECK([Count] > 0 AND [Count] < 10000) NOT NULL,
	[UnitPrice] INT CHECK([UnitPrice] > 0 AND [UnitPrice] < 1000000) NOT NULL
)
--���������
CREATE TABLE [Invoice]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Date] DateTime NOT NULL,
)
--��� ���������
CREATE TABLE [InvoiceType]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 10000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(50) CHECK(Len([ShortName]) < 10000 AND [ShortName] LIKE '[A-Z]%') NOT NULL
)

--���������
CREATE TABLE [Provider]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
    [Email] NVARCHAR(15) CHECK([Email] LIKE '[A-Z]%') NOT NULL,
)

--����������
CREATE TABLE [Buyer]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Email] NVARCHAR(15) CHECK([Email] LIKE '[A-Z]%') NOT NULL,
)

--�� ����
CREATE TABLE [Entity]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[INN] INT CHECK([INN] < 10000000000) NOT NULL,
	[OGRN] INT CHECK([OGRN] < 10000000000) NOT NULL
)

--��� �� ����
CREATE TABLE [EntityType]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(50) CHECK(Len([ShortName]) < 100000 AND [ShortName] LIKE '[A-Z]%') NOT NULL
)

--��� ����
CREATE TABLE [Individual]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [SurName] NVARCHAR(200) CHECK([SurName] LIKE '[A-Z]%') NOT NULL,
	[Name] NVARCHAR(200) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[FatherName] NVARCHAR(200) CHECK([FatherName] LIKE '[A-Z]%') NOT NULL,
	[Passport] INT CHECK([Passport] < 10000000000000) NOT NULL
)

--�������
CREATE TABLE [Sales]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Price] INT CHECK([Price] < 100000) NOT NULL,
	[Count] INT CHECK([Count] < 100000) NOT NULL,
	[Date] DateTime NOT NULL
)

--�������
CREATE TABLE [Phone]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Number] NVARCHAR(100) CHECK([Number] < 100000) NOT NULL,
)

--��� ��������
CREATE TABLE [PhoneType]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
)

--�����
CREATE TABLE [Adress]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [HouseNumber] INT CHECK([HouseNumber] < 100000) NOT NULL,
	[ApartmentNumber] INT CHECK([ApartmentNumber] < 100000) NOT NULL
)

--��� �����
CREATE TABLE [StreetType]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(100) CHECK([ShortName] LIKE '[A-Z]%') NOT NULL
)

--�����
CREATE TABLE [Street]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(100) CHECK([ShortName] LIKE '[A-Z]%') NOT NULL
)

--��������� �����
CREATE TABLE [Locality]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(100) CHECK([ShortName] LIKE '[A-Z]%') NOT NULL
)

--��� ���������� ������
CREATE TABLE [Localitytype]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(100) CHECK([ShortName] LIKE '[A-Z]%') NOT NULL
)