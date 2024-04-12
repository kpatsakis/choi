void fun()
{
  int entity_2 = 5;
  char entity_0[53] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 'k', 53-1);
  entity_0[53-1]='';
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  entity_2 = 95;
  strcpy(entity_3, entity_0);
}