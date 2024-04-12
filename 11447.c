void fun()
{
  char entity_2[89] = "";
  char* entity_4;
  entity_4 = (char*)malloc(27*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'q', 89-1);
  entity_2[89-1]='0';
  strcpy(entity_4, entity_2);
}