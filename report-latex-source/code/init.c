e_init(nullptr);
e_reset_system();

//start workgroup with all e-cores
if(e_open(&dev, 0, 0, Y, X) != E_OK){
	printf("e_open failed\n");
	exit(1);
}

//load epiphany program into workgroup, but don't start it yet
if(e_load_group(epiphanyExecutable, &dev, 0, 0, Y, X, E_FALSE) == E_ERR){
        printf("epiphany program could not be loaded into workgroup\n");
        exit(1);
}
