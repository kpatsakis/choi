void fun()
{
  int entity_6 = 7;
  char entity_0[52] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_1[17] = "";
  entity_1 = NULL;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_1, 'a', 17-1);
  entity_1[17-1]='';
  memset(entity_0, 'K', 52-1);
  entity_0[52-1]='';
  memcpy(entity_4, entity_0, 52*sizeof(char));
}