void fun()
{
  char* entity_6;
  char* entity_5;
  char entity_3[9] = "";
  entity_5 = (char*)malloc(62*sizeof(char));
  entity_5[0]='0';
  entity_6 = (char*)malloc(46*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 's', 9-1);
  entity_3[9-1]='0';
  strcpy(entity_6, entity_3);
}