void fun()
{
  char* entity_0;
  char entity_4[79] = "";
  char entity_6[80] = "";
  char entity_3 = 'D';
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'j', 79-1);
  entity_4[79-1]='0';
  memset(entity_6, 'k', 80-1);
  entity_6[80-1]='0';
  strcpy(entity_0, entity_4);
}