void fun()
{
  int entity_3 = 100;
  char entity_8[49] = "";
  char* entity_4;
  char* entity_6;
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'N', 49-1);
  entity_8[49-1]='0';
  entity_4 = (char*)malloc(46*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_6, entity_8);
}