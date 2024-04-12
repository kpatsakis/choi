void fun()
{
  int entity_5 = 37;
  char* entity_0;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'X', entity_5-1);
  entity_8[entity_5-1]='';
  entity_0 = (char*)malloc(83*sizeof(char));
  entity_0[83-1]='';
  strcpy(entity_0, entity_8);
}