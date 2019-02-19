//REMOTE Commands

	if ((strcmp ("99",dst.c_str()) ==0) && (strcmp ("EA5SW",src.c_str()) ==0)){
	LogMessage ("Remote Command Reboot");
	system("sudo reboot");
	}
	else if ((strcmp ("98",dst.c_str()) == 0) && (strcmp ("EA5SW",src.c_str()) ==0)){
	LogMessage ("Remote Command Shutdown");
	system("sudo shutdown -h now");
	}
	else if ((strcmp ("40",dst.c_str()) == 0) && (strcmp ("EA5SW",src.c_str()) ==0)){
	LogMessage  ("Remote Command DmrPlus");
	system("mm_plus");
	}	
	else if ((strcmp ("50",dst.c_str()) == 0) && (strcmp ("EA5SW",src.c_str()) ==0)){
	LogMessage  ("Remote Command HBLink");
	system("mm_link");
	}
	else if ((strcmp ("30",dst.c_str()) ==0) && (strcmp ("EA5SW",src.c_str()) ==0)){
	LogMessage  ("Remote Command BrandMeister");
	system("mm_BM");
	}
	else if ((strcmp ("60",dst.c_str()) ==0) && (strcmp ("EA5SW",src.c_str()) ==0)){
	LogMessage ("Remote 2MMDVM On");
	system("mm_2link");	system("mm_2link");
	}
	else if ((strcmp ("61",dst.c_str()) ==0) && (strcmp ("EA5SW",src.c_str()) ==0)){
	LogMessage  ("Remote 2MMDVM Off");
	system("mm_2MMDVM_off");
	}
	else if ((strcmp ("21",dst.c_str()) ==0) && (strcmp ("EA5SW",src.c_str()) ==0)){
	LogMessage  ("Remote Command Wifi On");
	system("sudo rfkill unblock 0");
	}	
	else if ((strcmp ("20",dst.c_str()) ==0) && (strcmp ("EA5SW",src.c_str()) ==0)){
	LogMessage  ("Remot Command Wifi Off");
	system("sudo rfkill block 0");
	}
}

