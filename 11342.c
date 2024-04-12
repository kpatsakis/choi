void fun()
{
  int entity_2 = 34;
  char* entity_9;
  char entity_7[15] = "";
  char entity_4[42] = "";
  memset(entity_4, 'w', 42-1);
  entity_4[42-1]='0';
  entity_9 = (char*)malloc(83*sizeof(char));
  entity_9[0]='0';
  memset(entity_7, 'f', 15-1);
  entity_7[15-1]='0';
  strcpy(entity_9, entity_7);
}