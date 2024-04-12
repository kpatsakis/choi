void fun()
{
  int entity_5 = 46;
  char* entity_8;
  char entity_9[39] = "";
  char entity_3[68] = "";
  entity_8 = (char*)malloc(75*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 't', 68-1);
  entity_3[68-1]='0';
  memset(entity_9, 'X', 39-1);
  entity_9[39-1]='0';
  memcpy(entity_8, entity_9, 39*sizeof(char));
}