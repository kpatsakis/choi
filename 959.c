void fun()
{
  int entity_3 = 27;
  int entity_7 = 27;
  int entity_1 = 33;
  char entity_6[13] = "";
  entity_6 = NULL;
  char* entity_8;
  char entity_2[15] = "";
  entity_2 = NULL;
  memset(entity_2, 'J', 15-1);
  entity_2[15-1]='';
  memset(entity_6, 'a', 13-1);
  entity_6[13-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memcpy(entity_8, entity_2, 15*sizeof(char));
}