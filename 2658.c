void fun()
{
  int entity_6 = 13;
  int entity_9 = 53;
  char* entity_8;
  char entity_1[6] = "";
  entity_1 = NULL;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  entity_8 = (char*)malloc(90*sizeof(char));
  entity_8[90-1]='';
  memset(entity_5, 'q', entity_6-1);
  entity_5[entity_6-1]='';
  memset(entity_1, 'g', 6-1);
  entity_1[6-1]='';
  entity_5[45] = 'T';
}