void fun()
{
  int entity_9 = 41;
  char entity_5[95] = "";
  entity_5 = NULL;
  char* entity_2;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'R', entity_9-1);
  entity_1[entity_9-1]='';
  entity_2 = (char*)malloc(16*sizeof(char));
  entity_2[16-1]='';
  memset(entity_5, 'K', 95-1);
  entity_5[95-1]='';
  entity_9 = 44;
  memcpy(entity_2, entity_1, entity_9*sizeof(char));
}