use [QTDataBasee]


CREATE TABLE [dbo].[User](
	[Id] INT PRIMARY KEY NOT NULL,
	[Role] NVARCHAR(255) NOT NULL,
	[Password] NVARCHAR(255) NOT NULL
);
