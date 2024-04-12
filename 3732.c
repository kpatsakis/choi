void fun()
{
  char* entity_0;
  char entity_1[55] = "";
  entity_1 = NULL;
  memset(entity_1, 'I', 55-1);
  entity_1[55-1]='';
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[46-1]='';
  strcpy(entity_0, entity_1);
}