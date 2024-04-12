void fun()
{
  int entity_4 = 40;
  entity_4 = 65;
  char entity_1[39] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_1, 'q', 39-1);
  entity_1[39-1]='';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  strcpy(entity_0, entity_1);
}