void fun()
{
  int entity_9 = 57;
  char entity_4[45] = "";
  entity_4 = NULL;
  char entity_2 = 'n';
  char* entity_0;
  memset(entity_4, 's', 45-1);
  entity_4[45-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  entity_9 = 84;
  strcpy(entity_0, entity_4);
}