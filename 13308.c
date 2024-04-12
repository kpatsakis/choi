void fun()
{
  int entity_1 = 7;
  entity_1 = 42;
  char entity_5[84] = "";
  char entity_9 = 'a';
  char entity_0 = 'R';
  char* entity_4;
  memset(entity_5, 'C', 84-1);
  entity_5[84-1]='0';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_5);
}