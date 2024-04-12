void fun()
{
  char entity_4[89] = "";
  char* entity_9;
  char* entity_6;
  memset(entity_4, 'q', 89-1);
  entity_4[89-1]='0';
  entity_6 = (char*)malloc(4*sizeof(char));
  entity_6[0]='0';
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_4);
}