void fun()
{
  int entity_4 = 76;
  entity_4 = 16;
  char* entity_0;
  char entity_5[21] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_5, 'E', 21-1);
  entity_5[21-1]='';
  strcpy(entity_0, entity_5);
}