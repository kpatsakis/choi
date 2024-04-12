void fun()
{
  int entity_5 = 51;
  int entity_2 = 8;
  entity_5 = 54;
  char* entity_8;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(46*sizeof(char));
  entity_8[46-1]='';
  memset(entity_3, 'Y', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[16] = 'O';
}