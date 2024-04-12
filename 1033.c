void fun()
{
  int entity_9 = 4;
  char entity_6 = 't';
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_2;
  char entity_3[39] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[83-1]='';
  memset(entity_4, 'b', entity_9-1);
  entity_4[entity_9-1]='';
  memset(entity_3, 'T', 39-1);
  entity_3[39-1]='';
  memcpy(entity_2, entity_4, entity_9*sizeof(char));
}