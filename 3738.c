void fun()
{
  int entity_9 = 79;
  char* entity_1;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_4, 'p', entity_9-1);
  entity_4[entity_9-1]='';
  entity_1 = (char*)malloc(24*sizeof(char));
  entity_1[24-1]='';
  memcpy(entity_1, entity_4, entity_9*sizeof(char));
}