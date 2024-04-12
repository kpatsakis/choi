void fun()
{
  char* entity_5;
  char entity_1[17] = "";
  memset(entity_1, 'e', 17-1);
  entity_1[17-1]='0';
  entity_5 = (char*)malloc(27*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_1);
}