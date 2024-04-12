void fun()
{
  int entity_8 = 46;
  char entity_1 = 'k';
  char entity_2[42] = "";
  entity_2 = NULL;
  char* entity_0;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  memset(entity_2, 'F', 42-1);
  entity_2[42-1]='';
  memset(entity_6, 'A', entity_8-1);
  entity_6[entity_8-1]='';
  entity_0 = (char*)malloc(53*sizeof(char));
  entity_0[53-1]='';
  strcpy(entity_0, entity_6);
}