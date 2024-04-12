void fun()
{
  int entity_5 = 56;
  int entity_1 = 15;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'G', entity_1-1);
  entity_4[entity_1-1]='';
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[11-1]='';
  strcpy(entity_0, entity_4);
}