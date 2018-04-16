//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Library_Wait()
{
	truclient_step("1", "Function wait", "snapshot=Wait_1.inf");
	{
		truclient_step("1.1", "Wait 5 seconds", "snapshot=Wait_1.1.inf");
	}
	truclient_step("2", "Function wait10", "snapshot=Wait_2.inf");
	{
		truclient_step("2.1", "Wait 10 seconds", "snapshot=Wait_2.1.inf");
	}

	return 0;
}
