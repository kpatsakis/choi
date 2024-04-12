void fun()
{
  char entity_0[12] = "";
  entity_0 = NULL;
  char entity_1[45] = "";
  entity_1 = NULL;
  char* entity_5;
  memset(entity_1, 'C', 45-1);
  entity_1[45-1]='';
  entity_5 = (char*)malloc(43*sizeof(char));
  entity_5[43-1]='';
  memset(entity_0, 'n', 12-1);
  entity_0[12-1]='';
  memcpy(entity_5, entity_0, 12*sizeof(char));
}