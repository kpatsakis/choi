void fun()
{
  int entity_9 = 95;
  char entity_3[95] = "";
  char* entity_4;
  char entity_6[23] = "";
  entity_4 = (char*)malloc(83*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'U', 23-1);
  entity_6[23-1]='0';
  memset(entity_3, 'R', 95-1);
  entity_3[95-1]='0';
  memcpy(entity_4, entity_3, 95*sizeof(char));
}