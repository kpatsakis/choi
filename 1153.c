void fun()
{
  int entity_3 = 49;
  char entity_8[63] = "";
  entity_8 = NULL;
  char* entity_4;
  memset(entity_8, 'i', 63-1);
  entity_8[63-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  entity_3 = 39;
  strcpy(entity_4, entity_8);
}