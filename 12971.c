void fun()
{
  int entity_7 = 31;
  char* entity_6;
  char entity_1[42] = "";
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'r', 42-1);
  entity_1[42-1]='0';
  strcpy(entity_6, entity_1);
}