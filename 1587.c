void fun()
{
  int entity_9 = 70;
  char* entity_1;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(54*sizeof(char));
  entity_1[54-1]='';
  memset(entity_2, 'd', entity_9-1);
  entity_2[entity_9-1]='';
  memcpy(entity_1, entity_2, entity_9*sizeof(char));
}