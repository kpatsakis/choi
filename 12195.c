void fun()
{
  int entity_7 = 66;
  char entity_9[42] = "";
  char* entity_8;
  memset(entity_9, 'u', 42-1);
  entity_9[42-1]='0';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_9);
}