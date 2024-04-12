void fun()
{
  int entity_8 = 31;
  int entity_7 = 17;
  char* entity_3;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  memset(entity_0, 'k', entity_7-1);
  entity_0[entity_7-1]='';
  entity_3 = (char*)malloc(1*sizeof(char));
  entity_3[1-1]='';
  strcpy(entity_3, entity_0);
}