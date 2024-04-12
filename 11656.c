void fun()
{
  char entity_4 = 'V';
  char entity_9[11] = "";
  char* entity_5;
  entity_5 = (char*)malloc(46*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'L', 11-1);
  entity_9[11-1]='0';
  memcpy(entity_5, entity_9, 11*sizeof(char));
}