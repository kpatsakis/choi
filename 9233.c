void fun()
{
  int entity_6 = 2;
  int entity_5 = 22;
  entity_6 = 2;
  char* entity_4;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  memset(entity_0, 'A', entity_6-1);
  entity_0[entity_6-1]='';
  entity_4 = (char*)malloc(15*sizeof(char));
  entity_4[15-1]='';
  strcpy(entity_4, entity_0);
}