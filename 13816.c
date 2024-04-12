void fun()
{
  int entity_8 = 34;
  char* entity_4;
  char* entity_6;
  char entity_5[71] = "";
  char entity_7[91] = "";
  char entity_9 = 'Q';
  memset(entity_7, 'v', 91-1);
  entity_7[91-1]='0';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[0]='0';
  entity_4 = (char*)malloc(53*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'o', 71-1);
  entity_5[71-1]='0';
  entity_8 = 62;
  memcpy(entity_6, entity_7, 91*sizeof(char));
}