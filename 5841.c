void fun()
{
  int entity_0 = 80;
  char entity_4[63] = "";
  entity_4 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_4, 'W', 63-1);
  entity_4[63-1]='';
  entity_0 = 49;
  strcpy(entity_5, entity_4);
}