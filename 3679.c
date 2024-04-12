void fun()
{
  int entity_0 = 11;
  entity_0 = 14;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  char entity_4[24] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_5, 'L', entity_0-1);
  entity_5[entity_0-1]='';
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[46-1]='';
  memset(entity_4, 'T', 24-1);
  entity_4[24-1]='';
  entity_5[42] = 'Q';
}