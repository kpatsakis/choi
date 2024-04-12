void fun()
{
  int entity_2 = 13;
  char entity_1[entity_2] = "";
  char* entity_6;
  entity_6 = (char*)malloc(46*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'w', entity_2-1);
  entity_1[entity_2-1]='0';
  strcpy(entity_6, entity_1);
}