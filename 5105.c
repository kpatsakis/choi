void fun()
{
  int entity_2 = 41;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(100*sizeof(char));
  entity_0[100-1]='';
  memset(entity_8, 'E', entity_2-1);
  entity_8[entity_2-1]='';
  strcpy(entity_0, entity_8);
}