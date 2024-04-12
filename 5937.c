void fun()
{
  int entity_5 = 69;
  entity_5 = 61;
  char* entity_9;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'm', entity_5-1);
  entity_2[entity_5-1]='';
  entity_9 = (char*)malloc(97*sizeof(char));
  entity_9[97-1]='';
  memcpy(entity_9, entity_2, entity_5*sizeof(char));
}