void fun()
{
  int entity_7 = 75;
  int entity_9 = 99;
  entity_7 = 41;
  char entity_5[91] = "";
  char entity_6[12] = "";
  char entity_1[11] = "";
  char* entity_3;
  memset(entity_1, 'Y', 11-1);
  entity_1[11-1]='0';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  memset(entity_6, 'd', 12-1);
  entity_6[12-1]='0';
  memset(entity_5, 'G', 91-1);
  entity_5[91-1]='0';
  memcpy(entity_3, entity_5, 91*sizeof(char));
}