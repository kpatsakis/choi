void fun()
{
  int entity_7 = 35;
  int entity_2 = 52;
  entity_7 = 1;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_9 = 'f';
  memset(entity_6, 'H', entity_7-1);
  entity_6[entity_7-1]='';
  entity_1 = (char*)malloc(26*sizeof(char));
  entity_1[26-1]='';
  memcpy(entity_1, entity_6, entity_7*sizeof(char));
}