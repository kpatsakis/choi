void fun()
{
  int entity_5 = 29;
  int entity_7 = 46;
  char entity_8[18] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'H', 18-1);
  entity_8[18-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memcpy(entity_6, entity_8, 18*sizeof(char));
}