void fun()
{
  int entity_7 = 42;
  int entity_5 = 0;
  char entity_6[64] = "";
  char* entity_2;
  memset(entity_6, 'n', 64-1);
  entity_6[64-1]='0';
  entity_2 = (char*)malloc(98*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_6);
}