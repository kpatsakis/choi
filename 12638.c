void fun()
{
  int entity_5 = 79;
  char entity_3[73] = "";
  char entity_6 = 'I';
  char entity_1 = 'Q';
  char* entity_2;
  memset(entity_3, 'Q', 73-1);
  entity_3[73-1]='0';
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_3);
}