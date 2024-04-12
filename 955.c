void fun()
{
  int entity_4 = 14;
  char* entity_3;
  char entity_0[27] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_0, 'k', 27-1);
  entity_0[27-1]='';
  strcpy(entity_3, entity_0);
}