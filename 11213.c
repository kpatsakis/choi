void fun()
{
  int entity_5 = 93;
  char entity_9[7] = "";
  char entity_6[62] = "";
  char* entity_0;
  memset(entity_6, 'M', 62-1);
  entity_6[62-1]='0';
  memset(entity_9, 'm', 7-1);
  entity_9[7-1]='0';
  entity_0 = (char*)malloc(9*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_9, 7*sizeof(char));
}