void fun()
{
  int entity_0 = 55;
  char* entity_8;
  char entity_1[39] = "";
  entity_1 = NULL;
  memset(entity_1, 'p', 39-1);
  entity_1[39-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  entity_0 = 62;
  strcpy(entity_8, entity_1);
}