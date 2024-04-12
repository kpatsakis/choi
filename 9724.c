void fun()
{
  int entity_4 = 74;
  char* entity_6;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  memset(entity_9, 'o', entity_4-1);
  entity_9[entity_4-1]='';
  entity_6 = (char*)malloc(88*sizeof(char));
  entity_6[88-1]='';
  entity_4 = 39;
  memcpy(entity_6, entity_9, entity_4*sizeof(char));
}