void fun()
{
  int entity_9 = 30;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[72-1]='';
  memset(entity_3, 'B', entity_9-1);
  entity_3[entity_9-1]='';
  memcpy(entity_6, entity_3, entity_9*sizeof(char));
}