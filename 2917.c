void fun()
{
  int entity_2 = 95;
  char* entity_8;
  char* entity_1;
  char* entity_9;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(46*sizeof(char));
  entity_9[46-1]='';
  memset(entity_7, 'd', entity_2-1);
  entity_7[entity_2-1]='';
  entity_8 = (char*)malloc(83*sizeof(char));
  entity_8[83-1]='';
  entity_1 = (char*)malloc(18*sizeof(char));
  entity_1[18-1]='';
  strcpy(entity_9, entity_7);
}