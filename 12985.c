void fun()
{
  int entity_7 = 27;
  int entity_4 = 98;
  char entity_6[entity_7] = "";
  char* entity_2;
  char* entity_8;
  entity_2 = (char*)malloc(46*sizeof(char));
  entity_2[0]='0';
  entity_8 = (char*)malloc(2*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'C', entity_7-1);
  entity_6[entity_7-1]='0';
  strcpy(entity_8, entity_6);
}