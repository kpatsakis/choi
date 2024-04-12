void fun()
{
  int entity_4 = 5;
  char* entity_0;
  char entity_3[entity_4] = "";
  entity_0 = (char*)malloc(46*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'b', entity_4-1);
  entity_3[entity_4-1]='0';
  entity_4 = 71;
  strcpy(entity_0, entity_3);
}