void fun()
{
  int entity_9 = 95;
  entity_9 = 28;
  char* entity_3;
  char entity_2[88] = "";
  entity_2 = NULL;
  char entity_7[33] = "";
  entity_7 = NULL;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_7, 'Q', 33-1);
  entity_7[33-1]='';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[93-1]='';
  memset(entity_2, 'w', 88-1);
  entity_2[88-1]='';
  memset(entity_4, 'j', entity_9-1);
  entity_4[entity_9-1]='';
  memcpy(entity_3, entity_4, entity_9*sizeof(char));
}