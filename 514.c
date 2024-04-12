void fun()
{
  int entity_7 = 42;
  char* entity_3;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[21-1]='';
  memset(entity_0, 'o', entity_7-1);
  entity_0[entity_7-1]='';
  strcpy(entity_3, entity_0);
}