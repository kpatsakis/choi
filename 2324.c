void fun()
{
  int entity_3 = 12;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_0;
  memset(entity_8, 'D', entity_3-1);
  entity_8[entity_3-1]='';
  entity_0 = (char*)malloc(31*sizeof(char));
  entity_0[31-1]='';
  strcpy(entity_0, entity_8);
}