void fun()
{
  int entity_3 = 54;
  entity_3 = 48;
  char* entity_4;
  char entity_2[69] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_5[42] = "";
  entity_5 = NULL;
  memset(entity_2, 'u', 69-1);
  entity_2[69-1]='';
  memset(entity_5, 'n', 42-1);
  entity_5[42-1]='';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  entity_4 = (char*)malloc(69*sizeof(char));
  entity_4[69-1]='';
  strcpy(entity_6, entity_5);
}