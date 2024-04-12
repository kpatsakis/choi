void fun()
{
  int entity_8 = 59;
  char* entity_0;
  char* entity_4;
  char entity_3[86] = "";
  entity_3 = NULL;
  char entity_2[46] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(91*sizeof(char));
  entity_4[91-1]='';
  memset(entity_3, 'a', 86-1);
  entity_3[86-1]='';
  memset(entity_2, 'C', 46-1);
  entity_2[46-1]='';
  entity_0 = (char*)malloc(63*sizeof(char));
  entity_0[63-1]='';
  strcpy(entity_4, entity_3);
}