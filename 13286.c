void fun()
{
  int entity_2 = 15;
  char entity_7 = 'n';
  char entity_3[entity_2] = "";
  char* entity_0;
  char* entity_9;
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[0]='0';
  entity_0 = (char*)malloc(99*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'L', entity_2-1);
  entity_3[entity_2-1]='0';
  entity_2 = 36;
  memcpy(entity_9, entity_3, entity_2*sizeof(char));
}