void fun()
{
  int entity_6 = 40;
  entity_6 = 40;
  char* entity_3;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char entity_8[44] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[28-1]='';
  memset(entity_0, 'k', entity_6-1);
  entity_0[entity_6-1]='';
  memset(entity_8, 'p', 44-1);
  entity_8[44-1]='';
  strcpy(entity_3, entity_0);
}