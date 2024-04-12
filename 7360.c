void fun()
{
  int entity_9 = 99;
  char* entity_1;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  entity_1 = (char*)malloc(55*sizeof(char));
  entity_1[55-1]='';
  memset(entity_4, 'h', entity_9-1);
  entity_4[entity_9-1]='';
  memcpy(entity_1, entity_4, entity_9*sizeof(char));
}