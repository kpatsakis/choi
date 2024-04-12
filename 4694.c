void fun()
{
  int entity_4 = 89;
  int entity_1 = 18;
  entity_1 = 20;
  char* entity_5;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_9;
  entity_5 = (char*)malloc(90*sizeof(char));
  entity_5[90-1]='';
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[46-1]='';
  memset(entity_0, 'H', entity_1-1);
  entity_0[entity_1-1]='';
  memcpy(entity_9, entity_0, entity_1*sizeof(char));
}