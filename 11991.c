void fun()
{
  char* entity_7;
  char entity_2[81] = "";
  char* entity_5;
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'O', 81-1);
  entity_2[81-1]='0';
  entity_7 = (char*)malloc(33*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_2);
}