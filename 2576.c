void fun()
{
  int entity_4 = 15;
  char entity_9 = 'A';
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char entity_0[39] = "";
  entity_0 = NULL;
  char* entity_6;
  char entity_7 = 'S';
  memset(entity_2, 'm', entity_4-1);
  entity_2[entity_4-1]='';
  memset(entity_0, 'N', 39-1);
  entity_0[39-1]='';
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[54-1]='';
  entity_4 = 79;
  memcpy(entity_6, entity_2, entity_4*sizeof(char));
}