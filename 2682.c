void fun()
{
  char* entity_6;
  char entity_9[45] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[30-1]='';
  memset(entity_9, 'R', 45-1);
  entity_9[45-1]='';
  memcpy(entity_6, entity_9, 45*sizeof(char));
}