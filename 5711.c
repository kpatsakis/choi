void fun()
{
  int entity_0 = 3;
  int entity_6 = 43;
  entity_6 = 11;
  char entity_7 = 't';
  char entity_9[63] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'u', 63-1);
  entity_9[63-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  strcpy(entity_8, entity_9);
}