void fun()
{
  int entity_5 = 41;
  int entity_7 = 95;
  int entity_6 = 71;
  entity_7 = 24;
  char* entity_1;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char entity_9 = 'T';
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[26-1]='';
  memset(entity_4, 'd', entity_7-1);
  entity_4[entity_7-1]='';
  memcpy(entity_1, entity_4, entity_7*sizeof(char));
}