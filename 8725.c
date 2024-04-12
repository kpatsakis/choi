void fun()
{
  int entity_6 = 5;
  char* entity_4;
  char entity_0[97] = "";
  entity_0 = NULL;
  char entity_1 = 'y';
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'n', entity_6-1);
  entity_7[entity_6-1]='';
  memset(entity_0, 'a', 97-1);
  entity_0[97-1]='';
  entity_4 = (char*)malloc(52*sizeof(char));
  entity_4[52-1]='';
  entity_6 = 64;
  strcpy(entity_4, entity_7);
}