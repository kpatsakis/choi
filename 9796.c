void fun()
{
  int entity_7 = 89;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(43*sizeof(char));
  entity_9[43-1]='';
  memset(entity_1, 'B', entity_7-1);
  entity_1[entity_7-1]='';
  entity_7 = 13;
  memcpy(entity_9, entity_1, entity_7*sizeof(char));
}