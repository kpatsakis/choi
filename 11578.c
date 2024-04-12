void fun()
{
  char* entity_0;
  char entity_4 = 's';
  char entity_1[56] = "";
  memset(entity_1, 'd', 56-1);
  entity_1[56-1]='0';
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_1);
}