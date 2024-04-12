void fun()
{
  char entity_2[42] = "";
  char* entity_5;
  char entity_0 = 'v';
  char entity_4[52] = "";
  memset(entity_4, 'B', 52-1);
  entity_4[52-1]='0';
  memset(entity_2, 'F', 42-1);
  entity_2[42-1]='0';
  entity_5 = (char*)malloc(52*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_4);
}