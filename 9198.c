void fun()
{
  int entity_3 = 27;
  char* entity_2;
  char entity_0[58] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memset(entity_0, 'Y', 58-1);
  entity_0[58-1]='';
  strcpy(entity_2, entity_0);
}