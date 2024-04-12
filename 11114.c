void fun()
{
  char* entity_5;
  char entity_3[75] = "";
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'm', 75-1);
  entity_3[75-1]='0';
  strcpy(entity_5, entity_3);
}