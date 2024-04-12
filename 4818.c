void fun()
{
  int entity_4 = 94;
  entity_4 = 94;
  char* entity_7;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  memset(entity_0, 'Q', entity_4-1);
  entity_0[entity_4-1]='';
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[96-1]='';
  strcpy(entity_7, entity_0);
}