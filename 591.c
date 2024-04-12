void fun()
{
  int entity_5 = 100;
  entity_5 = 100;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'A', entity_5-1);
  entity_0[entity_5-1]='';
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[77-1]='';
  strcpy(entity_3, entity_0);
}