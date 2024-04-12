void fun()
{
  int entity_5 = 4;
  entity_5 = 76;
  char* entity_8;
  char entity_7 = 'b';
  char entity_3[15] = "";
  entity_3 = NULL;
  memset(entity_3, 'H', 15-1);
  entity_3[15-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memcpy(entity_8, entity_3, 15*sizeof(char));
}