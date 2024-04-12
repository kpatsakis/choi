void fun()
{
  int entity_7 = 35;
  int entity_6 = 14;
  entity_7 = 66;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_0;
  memset(entity_8, 'W', entity_7-1);
  entity_8[entity_7-1]='';
  entity_0 = (char*)malloc(24*sizeof(char));
  entity_0[24-1]='';
  memcpy(entity_0, entity_8, entity_7*sizeof(char));
}