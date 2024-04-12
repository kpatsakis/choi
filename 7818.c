void fun()
{
  int entity_9 = 29;
  int entity_8 = 94;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char entity_4[33] = "";
  entity_4 = NULL;
  char entity_5 = 'g';
  char* entity_3;
  memset(entity_2, 'a', entity_9-1);
  entity_2[entity_9-1]='';
  memset(entity_4, 'u', 33-1);
  entity_4[33-1]='';
  entity_3 = (char*)malloc(87*sizeof(char));
  entity_3[87-1]='';
  entity_9 = 56;
  memcpy(entity_3, entity_2, entity_9*sizeof(char));
}