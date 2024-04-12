void fun()
{
  int entity_2 = 52;
  char* entity_1;
  char entity_6[entity_2] = "";
  entity_1 = (char*)malloc(46*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'I', entity_2-1);
  entity_6[entity_2-1]='0';
  entity_2 = 96;
  memcpy(entity_1, entity_6, entity_2*sizeof(char));
}