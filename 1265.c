void fun()
{
  int entity_9 = 81;
  char* entity_6;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(73*sizeof(char));
  entity_6[73-1]='';
  memset(entity_4, 'z', entity_9-1);
  entity_4[entity_9-1]='';
  entity_9 = 77;
  memcpy(entity_6, entity_4, entity_9*sizeof(char));
}