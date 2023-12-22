USE [QTDataBase];

--Ïðàéñ
CREATE TABLE [Price]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[Price] INT CHECK([Price] > 0 AND [Price] < 100000) NOT NULL
)
--Åäèíèöû èçìåðåíèÿ
CREATE TABLE [Units]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(50) CHECK(Len([ShortName]) < 100000 AND [ShortName] LIKE '[A-Z]%') NOT NULL
)
--Õàðàêòåðèñòèêà
CREATE TABLE [Characteristic]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(50) CHECK(Len([ShortName]) < 100000 AND [ShortName] LIKE '[A-Z]%') NOT NULL
)
--Òîâàð
CREATE TABLE [Product]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(50) CHECK(Len([ShortName]) < 100000 AND [ShortName] LIKE '[A-Z]%') NOT NULL
)
--ÏÎÇÈÖÈß ÍÀÊËÀÄÍÎÉ
CREATE TABLE [InvoicePosition]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Count] INT CHECK([Count] > 0 AND [Count] < 10000) NOT NULL,
	[UnitPrice] INT CHECK([UnitPrice] > 0 AND [UnitPrice] < 1000000) NOT NULL
)
--íàêëàäíàÿ
CREATE TABLE [Invoice]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Date] DateTime NOT NULL,
)
--Òèï íàêëàäíîé
CREATE TABLE [InvoiceType]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 10000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(50) CHECK(Len([ShortName]) < 10000 AND [ShortName] LIKE '[A-Z]%') NOT NULL
)

--ÏÎÑÒÀÂÙÈÊ
CREATE TABLE [Provider]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
    [Email] NVARCHAR(15) CHECK([Email] LIKE '[A-Z]%') NOT NULL,
)

--Ïîêóïàòåëü
CREATE TABLE [Buyer]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Email] NVARCHAR(15) CHECK([Email] LIKE '[A-Z]%') NOT NULL,
)

--Þð ëèöî
CREATE TABLE [Entity]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[INN] INT CHECK([INN] < 10000000000) NOT NULL,
	[OGRN] INT CHECK([OGRN] < 10000000000) NOT NULL
)

--Òèï þð ëèöî
CREATE TABLE [EntityType]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(50) CHECK(Len([ShortName]) < 100000 AND [ShortName] LIKE '[A-Z]%') NOT NULL
)

--Ôèç ëèöî
CREATE TABLE [Individual]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [SurName] NVARCHAR(200) CHECK([SurName] LIKE '[A-Z]%') NOT NULL,
	[Name] NVARCHAR(200) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[FatherName] NVARCHAR(200) CHECK([FatherName] LIKE '[A-Z]%') NOT NULL,
	[Passport] INT CHECK([Passport] < 10000000000000) NOT NULL
)

--ÏÐÎÄÀÆÈ
CREATE TABLE [Sales]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Price] INT CHECK([Price] < 100000) NOT NULL,
	[Count] INT CHECK([Count] < 100000) NOT NULL,
	[Date] DateTime NOT NULL
)

--ÒÅËÅÔÎÍ
CREATE TABLE [Phone]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Number] NVARCHAR(100) CHECK([Number] < 100000) NOT NULL,
)

--Òèï ÒÅËÅÔÎÍÀ
CREATE TABLE [PhoneType]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
)

--Àäðåñ
CREATE TABLE [Adress]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [HouseNumber] INT CHECK([HouseNumber] < 100000) NOT NULL,
	[ApartmentNumber] INT CHECK([ApartmentNumber] < 100000) NOT NULL
)

--òèï óëèöû
CREATE TABLE [StreetType]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(100) CHECK([ShortName] LIKE '[A-Z]%') NOT NULL
)

--óëèöà
CREATE TABLE [Street]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(100) CHECK([ShortName] LIKE '[A-Z]%') NOT NULL
)

--íàñåëžííûé ïóíêò
CREATE TABLE [Locality]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(100) CHECK([ShortName] LIKE '[A-Z]%') NOT NULL
)

--òèï íàñåëžííîãî ïóíêòà
CREATE TABLE [Localitytype]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(100) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[ShortName] NVARCHAR(100) CHECK([ShortName] LIKE '[A-Z]%') NOT NULL
)

CREATE TABLE [Employees]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(200) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[Position] NVARCHAR(200) CHECK([Position] LIKE '[A-Z]%') NOT NULL,
	[Salary] INT CHECK([Salary] > 0 AND [Salary] < 1000000) NOT NULL
)

CREATE TABLE [Clients]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [Name] NVARCHAR(200) CHECK([Name] LIKE '[A-Z]%') NOT NULL,
	[Email] NVARCHAR(15) CHECK([Email] LIKE '[A-Z]%') NOT NULL,
	[Phone] NVARCHAR(15) CHECK([Phone] LIKE '[A-Z]%') NOT NULL
);


CREATE TABLE [Orders]
(
    [Id] INT PRIMARY KEY IDENTITY(1,1) CHECK([Id] < 100000) NOT NULL ,
    [ClientId] INT FOREIGN KEY REFERENCES Clients(Id) NOT NULL,
    [EmployeeId] INT FOREIGN KEY REFERENCES Employees(Id) NOT NULL,
    [TotalPrice] INT CHECK([TotalPrice] > 0 AND [TotalPrice] < 1000000) NOT NULL,
    [OrderDate] DateTime NOT NULL
);
