void fun()
{
  int entity_8 = 21;
  char entity_0[81] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'A', 81-1);
  entity_0[81-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  entity_8 = 12;
  strcpy(entity_5, entity_0);
}