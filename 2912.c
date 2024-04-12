void fun()
{
  int entity_7 = 35;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(11*sizeof(char));
  entity_8[11-1]='';
  memset(entity_0, 'F', entity_7-1);
  entity_0[entity_7-1]='';
  strcpy(entity_8, entity_0);
}