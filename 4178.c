void fun()
{
  int entity_9 = 57;
  char* entity_1;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  memset(entity_3, 'U', entity_9-1);
  entity_3[entity_9-1]='';
  entity_1 = (char*)malloc(96*sizeof(char));
  entity_1[96-1]='';
  memcpy(entity_1, entity_3, entity_9*sizeof(char));
}