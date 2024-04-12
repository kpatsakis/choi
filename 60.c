void fun()
{
  int entity_5 = 52;
  char* entity_1;
  char entity_6[53] = "";
  entity_6 = NULL;
  char entity_4 = 'R';
  char entity_2[15] = "";
  entity_2 = NULL;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_6, 'J', 53-1);
  entity_6[53-1]='';
  memset(entity_2, 'J', 15-1);
  entity_2[15-1]='';
  strcpy(entity_1, entity_6);
}