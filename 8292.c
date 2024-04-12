void fun()
{
  int entity_2 = 49;
  char* entity_5;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_3 = 'U';
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[19-1]='';
  entity_5 = (char*)malloc(61*sizeof(char));
  entity_5[61-1]='';
  memset(entity_9, 'L', entity_2-1);
  entity_9[entity_2-1]='';
  entity_2 = 62;
  entity_9[45] = 'H';
}