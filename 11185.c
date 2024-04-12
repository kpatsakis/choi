void fun()
{
  char* entity_0;
  char entity_4[25] = "";
  char* entity_3;
  char entity_8[40] = "";
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'f', 25-1);
  entity_4[25-1]='0';
  memset(entity_8, 'm', 40-1);
  entity_8[40-1]='0';
  entity_3 = (char*)malloc(58*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_0, entity_8, 40*sizeof(char));
}