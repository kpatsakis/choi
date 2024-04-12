void fun()
{
  int entity_9 = 87;
  char* entity_6;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'T', entity_9-1);
  entity_1[entity_9-1]='';
  entity_6 = (char*)malloc(2*sizeof(char));
  entity_6[2-1]='';
  memcpy(entity_6, entity_1, entity_9*sizeof(char));
}