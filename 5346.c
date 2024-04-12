void fun()
{
  int entity_3 = 35;
  char entity_9[15] = "";
  entity_9 = NULL;
  char* entity_6;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(7*sizeof(char));
  entity_6[7-1]='';
  memset(entity_5, 'i', entity_3-1);
  entity_5[entity_3-1]='';
  memset(entity_9, 'u', 15-1);
  entity_9[15-1]='';
  memcpy(entity_6, entity_5, entity_3*sizeof(char));
}