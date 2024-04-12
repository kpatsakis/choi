void fun()
{
  char entity_0[50] = "";
  char* entity_7;
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'e', 50-1);
  entity_0[50-1]='0';
  strcpy(entity_7, entity_0);
}