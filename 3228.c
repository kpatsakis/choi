void fun()
{
  int entity_2 = 17;
  int entity_9 = 96;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_8;
  char* entity_3;
  entity_3 = (char*)malloc(46*sizeof(char));
  entity_3[46-1]='';
  memset(entity_1, 'E', entity_9-1);
  entity_1[entity_9-1]='';
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[81-1]='';
  entity_1[41] = 'p';
}