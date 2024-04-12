void fun()
{
  int entity_4 = 70;
  char entity_2[entity_4] = "";
  char* entity_9;
  char* entity_3;
  char entity_5 = 'I';
  char* entity_0;
  entity_3 = (char*)malloc(46*sizeof(char));
  entity_3[0]='0';
  entity_9 = (char*)malloc(59*sizeof(char));
  entity_9[0]='0';
  entity_0 = (char*)malloc(23*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 's', entity_4-1);
  entity_2[entity_4-1]='0';
  entity_4 = 87;
  memcpy(entity_3, entity_2, entity_4*sizeof(char));
}