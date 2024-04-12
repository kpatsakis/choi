void fun()
{
  int entity_2 = 65;
  char* entity_6;
  char entity_8[46] = "";
  entity_8 = NULL;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memset(entity_8, 'U', 46-1);
  entity_8[46-1]='';
  entity_2 = 100;
  memcpy(entity_6, entity_8, 46*sizeof(char));
}