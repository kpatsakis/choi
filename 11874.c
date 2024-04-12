void fun()
{
  int entity_6 = 26;
  char* entity_0;
  char entity_1[25] = "";
  char* entity_8;
  entity_8 = (char*)malloc(58*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 's', 25-1);
  entity_1[25-1]='0';
  entity_0 = (char*)malloc(17*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_8, entity_1, 25*sizeof(char));
}