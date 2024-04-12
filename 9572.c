void fun()
{
  int entity_4 = 92;
  entity_4 = 58;
  char entity_2[23] = "";
  entity_2 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_2, 'Z', 23-1);
  entity_2[23-1]='';
  strcpy(entity_0, entity_2);
}