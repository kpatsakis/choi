void fun()
{
  int entity_9 = 68;
  int entity_2 = 7;
  char entity_1[45] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_1, 'C', 45-1);
  entity_1[45-1]='';
  strcpy(entity_0, entity_1);
}