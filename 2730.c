void fun()
{
  int entity_4 = 32;
  entity_4 = 49;
  char entity_5 = 'K';
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_6, 'l', entity_4-1);
  entity_6[entity_4-1]='';
  entity_0 = (char*)malloc(39*sizeof(char));
  entity_0[39-1]='';
  memcpy(entity_0, entity_6, entity_4*sizeof(char));
}