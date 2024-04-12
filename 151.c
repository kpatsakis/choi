void fun()
{
  int entity_5 = 1;
  entity_5 = 42;
  char* entity_1;
  char entity_2[45] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'U', 45-1);
  entity_2[45-1]='';
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[98-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memcpy(entity_0, entity_2, 45*sizeof(char));
}