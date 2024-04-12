void fun()
{
  char* entity_4;
  char entity_1[71] = "";
  entity_1 = NULL;
  char* entity_0;
  char entity_9 = 'f';
  memset(entity_1, 'S', 71-1);
  entity_1[71-1]='';
  entity_4 = (char*)malloc(24*sizeof(char));
  entity_4[24-1]='';
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[46-1]='';
  strcpy(entity_0, entity_1);
}