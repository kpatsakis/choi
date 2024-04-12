void fun()
{
  int entity_7 = 87;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char entity_2 = 'd';
  char* entity_1;
  entity_1 = (char*)malloc(54*sizeof(char));
  entity_1[54-1]='';
  memset(entity_9, 'm', entity_7-1);
  entity_9[entity_7-1]='';
  memcpy(entity_1, entity_9, entity_7*sizeof(char));
}