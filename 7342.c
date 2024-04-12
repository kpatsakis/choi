void fun()
{
  int entity_5 = 25;
  char entity_9[95] = "";
  entity_9 = NULL;
  char* entity_1;
  memset(entity_9, 'Q', 95-1);
  entity_9[95-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memcpy(entity_1, entity_9, 95*sizeof(char));
}