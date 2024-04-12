void fun()
{
  int entity_8 = 53;
  char* entity_3;
  char entity_0[88] = "";
  entity_0 = NULL;
  memset(entity_0, 'r', 88-1);
  entity_0[88-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  strcpy(entity_3, entity_0);
}