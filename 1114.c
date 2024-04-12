void fun()
{
  char entity_1[94] = "";
  entity_1 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(46*sizeof(char));
  entity_4[46-1]='';
  memset(entity_1, 'h', 94-1);
  entity_1[94-1]='';
  strcpy(entity_4, entity_1);
}