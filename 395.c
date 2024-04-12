void fun()
{
  int entity_6 = 94;
  int entity_5 = 20;
  char* entity_7;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_9, 'x', entity_5-1);
  entity_9[entity_5-1]='';
  entity_7 = (char*)malloc(69*sizeof(char));
  entity_7[69-1]='';
  entity_5 = 69;
  memcpy(entity_7, entity_9, entity_5*sizeof(char));
}