void fun()
{
  int entity_1 = 11;
  entity_1 = 33;
  char entity_7[24] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_7, 'K', 24-1);
  entity_7[24-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  strcpy(entity_0, entity_7);
}