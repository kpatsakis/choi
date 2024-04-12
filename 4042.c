void fun()
{
  int entity_5 = 57;
  entity_5 = 35;
  char* entity_9;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(64*sizeof(char));
  entity_9[64-1]='';
  memset(entity_2, 'B', entity_5-1);
  entity_2[entity_5-1]='';
  memcpy(entity_9, entity_2, entity_5*sizeof(char));
}