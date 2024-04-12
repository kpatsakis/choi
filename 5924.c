void fun()
{
  int entity_5 = 13;
  int entity_2 = 6;
  char* entity_8;
  char entity_1 = 'Q';
  char entity_0[11] = "";
  entity_0 = NULL;
  memset(entity_0, 'l', 11-1);
  entity_0[11-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memcpy(entity_8, entity_0, 11*sizeof(char));
}