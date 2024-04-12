void fun()
{
  char* entity_5;
  char entity_2[75] = "";
  char entity_9[89] = "";
  memset(entity_9, 'a', 89-1);
  entity_9[89-1]='0';
  memset(entity_2, 'X', 75-1);
  entity_2[75-1]='0';
  entity_5 = (char*)malloc(46*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_9, 89*sizeof(char));
}