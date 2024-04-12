void fun()
{
  int entity_6 = 17;
  char* entity_2;
  char* entity_7;
  char entity_5[40] = "";
  char entity_9[entity_6] = "";
  memset(entity_5, 'i', 40-1);
  entity_5[40-1]='0';
  memset(entity_9, 'A', entity_6-1);
  entity_9[entity_6-1]='0';
  entity_2 = (char*)malloc(46*sizeof(char));
  entity_2[0]='0';
  entity_7 = (char*)malloc(32*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_9, entity_6*sizeof(char));
}