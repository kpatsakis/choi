void fun()
{
  int entity_4 = 76;
  char* entity_7;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  char entity_9[53] = "";
  entity_9 = NULL;
  entity_7 = (char*)malloc(13*sizeof(char));
  entity_7[13-1]='';
  memset(entity_0, 'K', entity_4-1);
  entity_0[entity_4-1]='';
  memset(entity_9, 'I', 53-1);
  entity_9[53-1]='';
  strcpy(entity_7, entity_0);
}