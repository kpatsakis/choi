void fun()
{
  char entity_9[48] = "";
  char entity_4[93] = "";
  char* entity_8;
  entity_8 = (char*)malloc(46*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'M', 48-1);
  entity_9[48-1]='0';
  memset(entity_4, 'V', 93-1);
  entity_4[93-1]='0';
  strcpy(entity_8, entity_4);
}