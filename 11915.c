void fun()
{
  char* entity_0;
  char entity_7[42] = "";
  entity_0 = (char*)malloc(14*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'o', 42-1);
  entity_7[42-1]='0';
  strcpy(entity_0, entity_7);
}