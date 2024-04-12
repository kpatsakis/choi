void fun()
{
  int entity_9 = 62;
  char* entity_3;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(26*sizeof(char));
  entity_3[26-1]='';
  memset(entity_4, 'y', entity_9-1);
  entity_4[entity_9-1]='';
  memcpy(entity_3, entity_4, entity_9*sizeof(char));
}