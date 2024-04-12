void fun()
{
  char entity_2 = 'A';
  char* entity_6;
  char entity_5[56] = "";
  entity_5 = NULL;
  char entity_7 = 'c';
  memset(entity_5, 'J', 56-1);
  entity_5[56-1]='';
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[30-1]='';
  strcpy(entity_6, entity_5);
}