void fun()
{
  int entity_6 = 63;
  char* entity_1;
  char entity_9[26] = "";
  entity_9 = NULL;
  char entity_5[5] = "";
  entity_5 = NULL;
  memset(entity_9, 'C', 26-1);
  entity_9[26-1]='';
  memset(entity_5, 'm', 5-1);
  entity_5[5-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  entity_6 = 57;
  memcpy(entity_1, entity_9, 26*sizeof(char));
}