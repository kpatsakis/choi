void fun()
{
  int entity_9 = 66;
  char* entity_3;
  char entity_8[5] = "";
  char entity_6[entity_9] = "";
  memset(entity_6, 'G', entity_9-1);
  entity_6[entity_9-1]='0';
  memset(entity_8, 'm', 5-1);
  entity_8[5-1]='0';
  entity_3 = (char*)malloc(32*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_6, entity_9*sizeof(char));
}