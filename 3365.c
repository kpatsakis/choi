void fun()
{
  int entity_7 = 87;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char entity_3 = 'l';
  char* entity_0;
  memset(entity_8, 'S', entity_7-1);
  entity_8[entity_7-1]='';
  entity_0 = (char*)malloc(69*sizeof(char));
  entity_0[69-1]='';
  strcpy(entity_0, entity_8);
}