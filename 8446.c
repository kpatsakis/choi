void fun()
{
  int entity_5 = 42;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(25*sizeof(char));
  entity_8[25-1]='';
  memset(entity_0, 'H', entity_5-1);
  entity_0[entity_5-1]='';
  strcpy(entity_8, entity_0);
}