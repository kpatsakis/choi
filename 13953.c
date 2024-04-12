void fun()
{
  int entity_9 = 33;
  entity_9 = 97;
  char entity_0[42] = "";
  char entity_2 = 'a';
  char entity_1[41] = "";
  char* entity_6;
  memset(entity_0, 'Q', 42-1);
  entity_0[42-1]='0';
  memset(entity_1, 'c', 41-1);
  entity_1[41-1]='0';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_0);
}