void fun()
{
  int entity_9 = 25;
  int entity_6 = 32;
  char entity_4[46] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memset(entity_4, 'H', 46-1);
  entity_4[46-1]='';
  entity_6 = 32;
  memcpy(entity_8, entity_4, 46*sizeof(char));
}