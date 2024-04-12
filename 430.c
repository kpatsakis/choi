void fun()
{
  int entity_2 = 35;
  char entity_4[89] = "";
  entity_4 = NULL;
  char entity_3[99] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_5 = 'G';
  memset(entity_4, 'R', 89-1);
  entity_4[89-1]='';
  memset(entity_3, 'm', 99-1);
  entity_3[99-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  entity_2 = 9;
  strcpy(entity_0, entity_3);
}