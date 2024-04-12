void fun()
{
  int entity_2 = 100;
  int entity_8 = 73;
  char* entity_4;
  char entity_0[45] = "";
  entity_0 = NULL;
  memset(entity_0, 'd', 45-1);
  entity_0[45-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  strcpy(entity_4, entity_0);
}