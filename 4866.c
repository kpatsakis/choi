void fun()
{
  int entity_9 = 17;
  entity_9 = 82;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_4;
  memset(entity_3, 'n', entity_9-1);
  entity_3[entity_9-1]='';
  entity_4 = (char*)malloc(9*sizeof(char));
  entity_4[9-1]='';
  memcpy(entity_4, entity_3, entity_9*sizeof(char));
}