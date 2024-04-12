void fun()
{
  int entity_7 = 30;
  char* entity_9;
  char entity_3 = 'Q';
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(88*sizeof(char));
  entity_9[88-1]='';
  memset(entity_2, 'y', entity_7-1);
  entity_2[entity_7-1]='';
  memcpy(entity_9, entity_2, entity_7*sizeof(char));
}