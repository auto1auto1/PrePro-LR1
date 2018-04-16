//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	truclient_step("1", "Login", "snapshot=Init_1.inf");
	{
		truclient_step("1.1", "Navigate to 'http://10.10.8.135:8080/BOE/BI'", "snapshot=Init_1.1.inf");
		truclient_step("1.4", "Type administrator in User Name textbox", "snapshot=Init_1.4.inf");
		truclient_step("1.8", "Type ********* in Password passwordbox", "snapshot=Init_1.8.inf");
		lr_start_transaction("BI-Login");
		truclient_step("1.9", "Click on Log On button", "snapshot=Init_1.9.inf");
		lr_end_transaction("BI-Login",0);
		truclient_step("1.10", "Call Function Wait.wait", "snapshot=Init_1.10.inf");
	}

	return 0;
}
