void fun()
{
  int entity_0 = 91;
  char* entity_3;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(15*sizeof(char));
  entity_3[15-1]='';
  memset(entity_8, 'Z', entity_0-1);
  entity_8[entity_0-1]='';
  strcpy(entity_3, entity_8);
}