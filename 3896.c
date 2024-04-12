void fun()
{
  int entity_2 = 92;
  char* entity_5;
  char entity_0[41] = "";
  entity_0 = NULL;
  char entity_8 = 'u';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memset(entity_0, 'p', 41-1);
  entity_0[41-1]='';
  entity_2 = 13;
  strcpy(entity_5, entity_0);
}