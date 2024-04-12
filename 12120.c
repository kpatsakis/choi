void fun()
{
  int entity_2 = 93;
  char* entity_7;
  char entity_6[entity_2] = "";
  char entity_8 = 'Y';
  char* entity_9;
  memset(entity_6, 'o', entity_2-1);
  entity_6[entity_2-1]='0';
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[0]='0';
  entity_7 = (char*)malloc(99*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_9, entity_6, entity_2*sizeof(char));
}