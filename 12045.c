void fun()
{
  int entity_7 = 65;
  char* entity_0;
  char* entity_1;
  char entity_3[entity_7] = "";
  entity_1 = (char*)malloc(46*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'r', entity_7-1);
  entity_3[entity_7-1]='0';
  entity_0 = (char*)malloc(31*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_1, entity_3, entity_7*sizeof(char));
}