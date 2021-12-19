.PHONY: clean All

All:
	@echo "----------Building project:[ PECLAlvarezRodriguezLucas - Debug ]----------"
	@cd "PECLAlvarezRodriguezLucas" && "$(MAKE)" -f  "PECLAlvarezRodriguezLucas.mk"
clean:
	@echo "----------Cleaning project:[ PECLAlvarezRodriguezLucas - Debug ]----------"
	@cd "PECLAlvarezRodriguezLucas" && "$(MAKE)" -f  "PECLAlvarezRodriguezLucas.mk" clean
