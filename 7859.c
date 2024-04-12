void fun()
{
  char* entity_3;
  char entity_9[11] = "";
  entity_9 = NULL;
  char* entity_1;
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[59-1]='';
  entity_1 = (char*)malloc(74*sizeof(char));
  entity_1[74-1]='';
  memset(entity_9, 'U', 11-1);
  entity_9[11-1]='';
  entity_9[45] = 'R';
}