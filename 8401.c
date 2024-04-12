void fun()
{
  int entity_4 = 48;
  char entity_8[78] = "";
  entity_8 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_8, 'q', 78-1);
  entity_8[78-1]='';
  strcpy(entity_0, entity_8);
}