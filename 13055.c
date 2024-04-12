void fun()
{
  int entity_0 = 70;
  entity_0 = 98;
  char* entity_1;
  char entity_6[59] = "";
  char entity_8[90] = "";
  char entity_7[15] = "";
  memset(entity_8, 'm', 90-1);
  entity_8[90-1]='0';
  memset(entity_6, 'd', 59-1);
  entity_6[59-1]='0';
  memset(entity_7, 'Z', 15-1);
  entity_7[15-1]='0';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_6, 59*sizeof(char));
}