void fun()
{
  int entity_7 = 6;
  char entity_1[57] = "";
  char entity_2 = 'n';
  char* entity_6;
  char entity_4 = 'Y';
  char entity_9[42] = "";
  memset(entity_9, 'n', 42-1);
  entity_9[42-1]='0';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'O', 57-1);
  entity_1[57-1]='0';
  entity_7 = 45;
  strcpy(entity_6, entity_1);
}