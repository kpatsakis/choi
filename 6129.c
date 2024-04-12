void fun()
{
  int entity_9 = 54;
  entity_9 = 85;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(88*sizeof(char));
  entity_4[88-1]='';
  memset(entity_3, 't', entity_9-1);
  entity_3[entity_9-1]='';
  memcpy(entity_4, entity_3, entity_9*sizeof(char));
}