void fun()
{
  int entity_4 = 31;
  int entity_5 = 85;
  char entity_1 = 'T';
  char entity_0[46] = "";
  entity_0 = NULL;
  char* entity_2;
  char entity_3[22] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_3, 'S', 22-1);
  entity_3[22-1]='';
  memset(entity_0, 'X', 46-1);
  entity_0[46-1]='';
  strcpy(entity_2, entity_3);
}