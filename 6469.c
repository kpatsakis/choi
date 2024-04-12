void fun()
{
  int entity_7 = 93;
  entity_7 = 33;
  char* entity_0;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char entity_5[98] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_9, 'c', entity_7-1);
  entity_9[entity_7-1]='';
  entity_0 = (char*)malloc(90*sizeof(char));
  entity_0[90-1]='';
  memset(entity_5, 'V', 98-1);
  entity_5[98-1]='';
  entity_6 = (char*)malloc(79*sizeof(char));
  entity_6[79-1]='';
  memcpy(entity_0, entity_9, entity_7*sizeof(char));
}