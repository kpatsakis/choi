void fun()
{
  int entity_0 = 97;
  int entity_8 = 70;
  int entity_9 = 22;
  entity_8 = 62;
  char entity_4[52] = "";
  entity_4 = NULL;
  char* entity_6;
  char entity_1[15] = "";
  entity_1 = NULL;
  memset(entity_4, 'X', 52-1);
  entity_4[52-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_1, 'G', 15-1);
  entity_1[15-1]='';
  memcpy(entity_6, entity_4, 52*sizeof(char));
}