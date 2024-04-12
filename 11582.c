void fun()
{
  char entity_7[5] = "";
  char* entity_8;
  char entity_2[60] = "";
  memset(entity_2, 'l', 60-1);
  entity_2[60-1]='0';
  entity_8 = (char*)malloc(34*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'n', 5-1);
  entity_7[5-1]='0';
  strcpy(entity_8, entity_7);
}