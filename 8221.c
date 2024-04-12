void fun()
{
  int entity_0 = 15;
  char entity_8[55] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'D', 55-1);
  entity_8[55-1]='';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  strcpy(entity_5, entity_8);
}