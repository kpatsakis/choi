void fun()
{
  int entity_5 = 80;
  char entity_6[44] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'u', 44-1);
  entity_6[44-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memcpy(entity_8, entity_6, 44*sizeof(char));
}