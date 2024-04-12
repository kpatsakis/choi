void fun()
{
  int entity_0 = 3;
  int entity_5 = 40;
  entity_0 = 3;
  char entity_2 = 'a';
  char* entity_8;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(55*sizeof(char));
  entity_8[55-1]='';
  memset(entity_6, 'u', entity_0-1);
  entity_6[entity_0-1]='';
  strcpy(entity_8, entity_6);
}