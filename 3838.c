void fun()
{
  int entity_5 = 6;
  entity_5 = 86;
  char* entity_8;
  char entity_0[29] = "";
  entity_0 = NULL;
  memset(entity_0, 'l', 29-1);
  entity_0[29-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  strcpy(entity_8, entity_0);
}