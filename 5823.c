void fun()
{
  int entity_0 = 97;
  char* entity_9;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char entity_7[4] = "";
  entity_7 = NULL;
  memset(entity_7, 'P', 4-1);
  entity_7[4-1]='';
  memset(entity_6, 'Q', entity_0-1);
  entity_6[entity_0-1]='';
  entity_9 = (char*)malloc(58*sizeof(char));
  entity_9[58-1]='';
  entity_0 = 94;
  memcpy(entity_9, entity_6, entity_0*sizeof(char));
}