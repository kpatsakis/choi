void fun()
{
  int entity_7 = 30;
  char entity_4[96] = "";
  entity_4 = NULL;
  char entity_5[88] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_5, 'U', 88-1);
  entity_5[88-1]='';
  memset(entity_4, 'x', 96-1);
  entity_4[96-1]='';
  entity_7 = 51;
  memcpy(entity_9, entity_4, 96*sizeof(char));
}