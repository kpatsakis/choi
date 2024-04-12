void fun()
{
  int entity_7 = 23;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char* entity_6;
  char entity_8[86] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(96*sizeof(char));
  entity_6[96-1]='';
  memset(entity_8, 'h', 86-1);
  entity_8[86-1]='';
  memset(entity_9, 'C', entity_7-1);
  entity_9[entity_7-1]='';
  memcpy(entity_6, entity_9, entity_7*sizeof(char));
}