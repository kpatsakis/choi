void fun()
{
  int entity_7 = 68;
  entity_7 = 86;
  char* entity_3;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char entity_5 = 's';
  memset(entity_8, 'U', entity_7-1);
  entity_8[entity_7-1]='';
  entity_3 = (char*)malloc(45*sizeof(char));
  entity_3[45-1]='';
  memcpy(entity_3, entity_8, entity_7*sizeof(char));
}