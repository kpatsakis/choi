void fun()
{
  int entity_0 = 94;
  int entity_5 = 93;
  char* entity_2;
  char entity_6[61] = "";
  entity_6 = NULL;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_6, 'Y', 61-1);
  entity_6[61-1]='';
  memset(entity_1, 'd', entity_5-1);
  entity_1[entity_5-1]='';
  entity_2 = (char*)malloc(32*sizeof(char));
  entity_2[32-1]='';
  memcpy(entity_2, entity_1, entity_5*sizeof(char));
}