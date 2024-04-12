void fun()
{
  int entity_4 = 19;
  int entity_1 = 62;
  char* entity_5;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_6 = 'q';
  memset(entity_9, 'j', entity_1-1);
  entity_9[entity_1-1]='';
  entity_5 = (char*)malloc(4*sizeof(char));
  entity_5[4-1]='';
  memcpy(entity_5, entity_9, entity_1*sizeof(char));
}