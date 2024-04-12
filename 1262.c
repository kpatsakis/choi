void fun()
{
  int entity_2 = 54;
  char entity_1 = 'P';
  char* entity_4;
  char entity_0[10] = "";
  entity_0 = NULL;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  memset(entity_0, 'x', 10-1);
  entity_0[10-1]='';
  entity_4 = (char*)malloc(75*sizeof(char));
  entity_4[75-1]='';
  memset(entity_8, 'A', entity_2-1);
  entity_8[entity_2-1]='';
  strcpy(entity_4, entity_8);
}