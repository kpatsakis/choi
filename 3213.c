void fun()
{
  int entity_4 = 59;
  char entity_0[59] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_7 = 't';
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char entity_2 = 'C';
  entity_1 = (char*)malloc(15*sizeof(char));
  entity_1[15-1]='';
  memset(entity_0, 'H', 59-1);
  entity_0[59-1]='';
  memset(entity_8, 'y', entity_4-1);
  entity_8[entity_4-1]='';
  strcpy(entity_1, entity_8);
}