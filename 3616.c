void fun()
{
  int entity_7 = 31;
  char* entity_0;
  char entity_1[18] = "";
  entity_1 = NULL;
  char entity_6[18] = "";
  entity_6 = NULL;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(15*sizeof(char));
  entity_0[15-1]='';
  memset(entity_2, 'q', entity_7-1);
  entity_2[entity_7-1]='';
  memset(entity_1, 'K', 18-1);
  entity_1[18-1]='';
  memset(entity_6, 'B', 18-1);
  entity_6[18-1]='';
  memcpy(entity_0, entity_2, entity_7*sizeof(char));
}