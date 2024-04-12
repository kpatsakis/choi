void fun()
{
  int entity_7 = 81;
  char* entity_4;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  memset(entity_9, 'B', entity_7-1);
  entity_9[entity_7-1]='';
  entity_4 = (char*)malloc(71*sizeof(char));
  entity_4[71-1]='';
  memcpy(entity_4, entity_9, entity_7*sizeof(char));
}