void fun()
{
  int entity_9 = 73;
  char entity_8[29] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_5[45] = "";
  entity_5 = NULL;
  char entity_2[15] = "";
  entity_2 = NULL;
  memset(entity_5, 'y', 45-1);
  entity_5[45-1]='';
  memset(entity_2, 'a', 15-1);
  entity_2[15-1]='';
  memset(entity_8, 'j', 29-1);
  entity_8[29-1]='';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  entity_9 = 60;
  strcpy(entity_1, entity_2);
}