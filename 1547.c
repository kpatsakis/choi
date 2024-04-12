void fun()
{
  int entity_7 = 6;
  char* entity_6;
  char entity_8[57] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memset(entity_8, 'W', 57-1);
  entity_8[57-1]='';
  entity_7 = 86;
  memcpy(entity_6, entity_8, 57*sizeof(char));
}