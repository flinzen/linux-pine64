static struct pn544_i2c_platform_data nfc_pdata = {
	.irq_gpio = GPIO_UNUSED,
	.ven_gpio = GPIO_UNUSED,
	.firm_gpio = GPIO_UNUSED
	.clkreq_gpio = GPIO_UNUSED
};


static struct i2c_board_info __initdata nfc_board_info[] = {
{
	I2C_BOARD_INFO("pn544", 0x24),
		.platform_data = &nfc_pdata,
	},
};
