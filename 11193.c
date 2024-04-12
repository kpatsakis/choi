void fun()
{
  int entity_2 = 22;
  char* entity_9;
  char entity_6[58] = "";
  char entity_3[17] = "";
  memset(entity_6, 'U', 58-1);
  entity_6[58-1]='0';
  memset(entity_3, 'O', 17-1);
  entity_3[17-1]='0';
  entity_9 = (char*)malloc(15*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_3);
}