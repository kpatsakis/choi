void fun()
{
  int entity_9 = 40;
  char entity_4[60] = "";
  entity_4 = NULL;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_4, 'X', 60-1);
  entity_4[60-1]='';
  memset(entity_5, 'g', entity_9-1);
  entity_5[entity_9-1]='';
  entity_7 = (char*)malloc(88*sizeof(char));
  entity_7[88-1]='';
  memcpy(entity_7, entity_5, entity_9*sizeof(char));
}