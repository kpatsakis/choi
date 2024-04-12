void fun()
{
  int entity_9 = 9;
  char entity_0[3] = "";
  entity_0 = NULL;
  char entity_2[45] = "";
  entity_2 = NULL;
  char entity_5 = 'w';
  char* entity_8;
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_0, 'C', 3-1);
  entity_0[3-1]='';
  memset(entity_2, 'F', 45-1);
  entity_2[45-1]='';
  memcpy(entity_8, entity_2, 45*sizeof(char));
}