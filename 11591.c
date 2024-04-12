void fun()
{
  int entity_3 = 46;
  char entity_4[64] = "";
  char* entity_5;
  char entity_7[3] = "";
  char entity_6[44] = "";
  memset(entity_4, 'V', 64-1);
  entity_4[64-1]='0';
  memset(entity_6, 'r', 44-1);
  entity_6[44-1]='0';
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'v', 3-1);
  entity_7[3-1]='0';
  memcpy(entity_5, entity_6, 44*sizeof(char));
}