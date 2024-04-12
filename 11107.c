void fun()
{
  char entity_3 = 'A';
  char* entity_6;
  char entity_5[35] = "";
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'B', 35-1);
  entity_5[35-1]='0';
  strcpy(entity_6, entity_5);
}