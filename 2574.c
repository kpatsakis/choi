void fun()
{
  int entity_4 = 69;
  entity_4 = 88;
  char* entity_6;
  char entity_7 = 'c';
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[30-1]='';
  memset(entity_9, 'q', entity_4-1);
  entity_9[entity_4-1]='';
  entity_6 = (char*)malloc(81*sizeof(char));
  entity_6[81-1]='';
  memcpy(entity_0, entity_9, entity_4*sizeof(char));
}