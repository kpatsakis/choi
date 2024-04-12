void fun()
{
  int entity_5 = 98;
  char entity_0[54] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_0, 'J', 54-1);
  entity_0[54-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memcpy(entity_6, entity_0, 54*sizeof(char));
}