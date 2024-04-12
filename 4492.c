void fun()
{
  int entity_0 = 11;
  entity_0 = 74;
  char* entity_5;
  char entity_8[57] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_8, 'm', 57-1);
  entity_8[57-1]='';
  memcpy(entity_5, entity_8, 57*sizeof(char));
}