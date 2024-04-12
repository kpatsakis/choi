void fun()
{
  int entity_6 = 24;
  char entity_2[24] = "";
  char* entity_1;
  char* entity_4;
  char entity_8 = 't';
  char entity_3[entity_6] = "";
  memset(entity_2, 'k', 24-1);
  entity_2[24-1]='0';
  entity_1 = (char*)malloc(63*sizeof(char));
  entity_1[0]='0';
  entity_4 = (char*)malloc(46*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'P', entity_6-1);
  entity_3[entity_6-1]='0';
  entity_6 = 62;
  memcpy(entity_1, entity_3, entity_6*sizeof(char));
}