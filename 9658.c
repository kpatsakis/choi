void fun()
{
  int entity_9 = 41;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_6;
  char* entity_7;
  entity_7 = (char*)malloc(93*sizeof(char));
  entity_7[93-1]='';
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[98-1]='';
  memset(entity_2, 'm', entity_9-1);
  entity_2[entity_9-1]='';
  memcpy(entity_7, entity_2, entity_9*sizeof(char));
}