void fun()
{
  int entity_6 = 94;
  char entity_2[33] = "";
  entity_2 = NULL;
  char* entity_4;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  memset(entity_9, 'e', entity_6-1);
  entity_9[entity_6-1]='';
  memset(entity_2, 's', 33-1);
  entity_2[33-1]='';
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  entity_6 = 75;
  memcpy(entity_4, entity_9, entity_6*sizeof(char));
}