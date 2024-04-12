void fun()
{
  int entity_3 = 76;
  char entity_8[52] = "";
  entity_8 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_8, 'W', 52-1);
  entity_8[52-1]='';
  entity_3 = 11;
  memcpy(entity_0, entity_8, 52*sizeof(char));
}