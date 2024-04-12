void fun()
{
  char entity_8[79] = "";
  entity_8 = NULL;
  char entity_0[69] = "";
  entity_0 = NULL;
  char* entity_5;
  char entity_4 = 'q';
  memset(entity_0, 'u', 69-1);
  entity_0[69-1]='';
  memset(entity_8, 'D', 79-1);
  entity_8[79-1]='';
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[5-1]='';
  strcpy(entity_5, entity_0);
}