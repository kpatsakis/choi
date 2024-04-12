void fun()
{
  int entity_9 = 60;
  char* entity_2;
  char* entity_0;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  memset(entity_6, 'H', entity_9-1);
  entity_6[entity_9-1]='';
  entity_0 = (char*)malloc(64*sizeof(char));
  entity_0[64-1]='';
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[39-1]='';
  entity_9 = 31;
  memcpy(entity_0, entity_6, entity_9*sizeof(char));
}