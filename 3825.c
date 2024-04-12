void fun()
{
  int entity_6 = 13;
  entity_6 = 82;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(94*sizeof(char));
  entity_0[94-1]='';
  memset(entity_9, 'E', entity_6-1);
  entity_9[entity_6-1]='';
  memcpy(entity_0, entity_9, entity_6*sizeof(char));
}