//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("BI Events Report-Documents Tab");
	truclient_step("2", "Click on Documents tab", "snapshot=Action_2.inf");
	lr_end_transaction("BI Events Report-Documents Tab",0);
	truclient_step("4", "Call Function Wait.wait", "snapshot=Action_4.inf");
	truclient_step("5", "Click on Folders link", "snapshot=Action_5.inf");
	truclient_step("6", "Call Function Wait.wait", "snapshot=Action_6.inf");
	truclient_step("7", "If Events & Actions javascript_link exists", "snapshot=Action_7.inf");
	{
	}
	truclient_step("Else");
	{
		truclient_step("7.1", "Move mouse over Public Folders", "snapshot=Action_7.1.inf");
		truclient_step("7.2", "Click on Public Folders javascript_link", "snapshot=Action_7.2.inf");
	}
	lr_start_transaction("BI Events Report-Events Report Tab");
	truclient_step("11", "Click on Events & Actions treeitem", "snapshot=Action_11.inf");
	lr_end_transaction("BI Events Report-Events Report Tab",0);
	truclient_step("14", "Call Function Wait.wait", "snapshot=Action_14.inf");
	truclient_step("15", "Double click Title, sorted ascending...", "snapshot=Action_15.inf");
	truclient_step("16", "Right click on Title, sorted ascending...", "snapshot=Action_16.inf");
	lr_start_transaction("BI Events Repor-Events Report View");
	truclient_step("17", "Click on View menuitem", "snapshot=Action_17.inf");
	lr_end_transaction("BI Events Repor-Events Report View",0);
	truclient_step("18", "Call Function Wait.wait", "snapshot=Action_18.inf");
	lr_start_transaction("BI Events Report-Generate 3 Days Report");
	truclient_step("19", "Click on OK gridcell", "snapshot=Action_19.inf");
	lr_end_transaction("BI Events Report-Generate 3 Days Report",0);
	truclient_step("20", "If OK gridcell exists", "snapshot=Action_20.inf");
	{
		truclient_step("20.1", "Click on OK gridcell", "snapshot=Action_20.1.inf");
	}

	return 0;
}
