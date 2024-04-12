void fun()
{
  int entity_6 = 13;
  int entity_3 = 93;
  char entity_8[57] = "";
  entity_8 = NULL;
  char* entity_0;
  memset(entity_8, 'Y', 57-1);
  entity_8[57-1]='';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memcpy(entity_0, entity_8, 57*sizeof(char));
}