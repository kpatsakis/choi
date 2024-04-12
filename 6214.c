void fun()
{
  int entity_0 = 42;
  char entity_6[30] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_6, 'k', 30-1);
  entity_6[30-1]='';
  entity_0 = 29;
  memcpy(entity_3, entity_6, 30*sizeof(char));
}