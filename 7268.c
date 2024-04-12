void fun()
{
  int entity_9 = 11;
  entity_9 = 27;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 'q', entity_9-1);
  entity_2[entity_9-1]='';
  entity_4 = (char*)malloc(14*sizeof(char));
  entity_4[14-1]='';
  memcpy(entity_4, entity_2, entity_9*sizeof(char));
}