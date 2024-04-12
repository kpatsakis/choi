void fun()
{
  int entity_7 = 100;
  char entity_4[11] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_1, 'w', entity_7-1);
  entity_1[entity_7-1]='';
  memset(entity_4, 'n', 11-1);
  entity_4[11-1]='';
  entity_0 = (char*)malloc(58*sizeof(char));
  entity_0[58-1]='';
  memcpy(entity_0, entity_1, entity_7*sizeof(char));
}