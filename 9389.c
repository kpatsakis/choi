void fun()
{
  int entity_2 = 50;
  char entity_8[69] = "";
  entity_8 = NULL;
  char entity_5[21] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_5, 'H', 21-1);
  entity_5[21-1]='';
  memset(entity_8, 'Q', 69-1);
  entity_8[69-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  strcpy(entity_0, entity_5);
}