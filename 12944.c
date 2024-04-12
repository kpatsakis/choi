void fun()
{
  int entity_1 = 3;
  char entity_7[entity_1] = "";
  char* entity_8;
  memset(entity_7, 'O', entity_1-1);
  entity_7[entity_1-1]='0';
  entity_8 = (char*)malloc(46*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_7, entity_1*sizeof(char));
}