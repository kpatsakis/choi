void fun()
{
  int entity_4 = 62;
  int entity_7 = 87;
  int entity_8 = 49;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'S', entity_7-1);
  entity_0[entity_7-1]='';
  entity_2 = (char*)malloc(79*sizeof(char));
  entity_2[79-1]='';
  strcpy(entity_2, entity_0);
}