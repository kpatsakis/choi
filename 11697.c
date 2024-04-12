void fun()
{
  char entity_5[33] = "";
  char* entity_4;
  char entity_6 = 'x';
  char entity_9 = 'A';
  memset(entity_5, 'o', 33-1);
  entity_5[33-1]='0';
  entity_4 = (char*)malloc(15*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_5);
}