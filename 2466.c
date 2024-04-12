void fun()
{
  int entity_6 = 36;
  char entity_0[42] = "";
  entity_0 = NULL;
  char entity_4[83] = "";
  entity_4 = NULL;
  char entity_8 = 'R';
  char entity_2[63] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_0, 'e', 42-1);
  entity_0[42-1]='';
  memset(entity_2, 'l', 63-1);
  entity_2[63-1]='';
  memset(entity_4, 'l', 83-1);
  entity_4[83-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  entity_6 = 7;
  strcpy(entity_3, entity_4);
}