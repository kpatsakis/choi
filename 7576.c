void fun()
{
  char entity_3[45] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_6 = 'R';
  entity_9 = (char*)malloc(60*sizeof(char));
  entity_9[60-1]='';
  memset(entity_3, 'b', 45-1);
  entity_3[45-1]='';
  memcpy(entity_9, entity_3, 45*sizeof(char));
}