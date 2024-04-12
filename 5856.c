void fun()
{
  int entity_9 = 12;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_6;
  char* entity_2;
  entity_2 = (char*)malloc(46*sizeof(char));
  entity_2[46-1]='';
  entity_6 = (char*)malloc(22*sizeof(char));
  entity_6[22-1]='';
  memset(entity_1, 'P', entity_9-1);
  entity_1[entity_9-1]='';
  memcpy(entity_2, entity_1, entity_9*sizeof(char));
}