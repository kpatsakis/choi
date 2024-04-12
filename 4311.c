void fun()
{
  int entity_5 = 58;
  int entity_6 = 56;
  char entity_2[58] = "";
  entity_2 = NULL;
  char* entity_8;
  memset(entity_2, 'Z', 58-1);
  entity_2[58-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memcpy(entity_8, entity_2, 58*sizeof(char));
}