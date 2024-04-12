void fun()
{
  int entity_3 = 68;
  char* entity_7;
  char entity_1 = 's';
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char entity_9[1] = "";
  entity_9 = NULL;
  memset(entity_6, 'G', entity_3-1);
  entity_6[entity_3-1]='';
  memset(entity_9, 'k', 1-1);
  entity_9[1-1]='';
  entity_7 = (char*)malloc(46*sizeof(char));
  entity_7[46-1]='';
  entity_6[57] = 'V';
}