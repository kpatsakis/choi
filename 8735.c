void fun()
{
  char entity_2 = 'M';
  char* entity_3;
  char entity_4[50] = "";
  entity_4 = NULL;
  char entity_7[83] = "";
  entity_7 = NULL;
  memset(entity_7, 'I', 83-1);
  entity_7[83-1]='';
  entity_3 = (char*)malloc(20*sizeof(char));
  entity_3[20-1]='';
  memset(entity_4, 'H', 50-1);
  entity_4[50-1]='';
  strcpy(entity_3, entity_4);
}