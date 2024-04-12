void fun()
{
  int entity_5 = 55;
  int entity_7 = 3;
  char entity_8[41] = "";
  entity_8 = NULL;
  char* entity_0;
  char entity_1 = 'v';
  memset(entity_8, 'Q', 41-1);
  entity_8[41-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memcpy(entity_0, entity_8, 41*sizeof(char));
}