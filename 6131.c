void fun()
{
  int entity_4 = 13;
  char* entity_5;
  char entity_8[48] = "";
  entity_8 = NULL;
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_8, 'z', 48-1);
  entity_8[48-1]='';
  entity_4 = 71;
  memcpy(entity_5, entity_8, 48*sizeof(char));
}