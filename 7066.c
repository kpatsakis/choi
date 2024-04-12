void fun()
{
  int entity_8 = 52;
  char entity_1[57] = "";
  entity_1 = NULL;
  char entity_2 = 'H';
  char entity_4[42] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_1, 'w', 57-1);
  entity_1[57-1]='';
  memset(entity_4, 'L', 42-1);
  entity_4[42-1]='';
  entity_0 = (char*)malloc(35*sizeof(char));
  entity_0[35-1]='';
  strcpy(entity_0, entity_4);
}