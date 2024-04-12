void fun()
{
  char entity_2[17] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 'a', 17-1);
  entity_2[17-1]='';
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[33-1]='';
  strcpy(entity_4, entity_2);
}