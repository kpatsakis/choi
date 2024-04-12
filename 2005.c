void fun()
{
  char* entity_2;
  char entity_0[50] = "";
  entity_0 = NULL;
  char entity_7[25] = "";
  entity_7 = NULL;
  memset(entity_7, 'G', 25-1);
  entity_7[25-1]='';
  entity_2 = (char*)malloc(54*sizeof(char));
  entity_2[54-1]='';
  memset(entity_0, 'l', 50-1);
  entity_0[50-1]='';
  strcpy(entity_2, entity_0);
}