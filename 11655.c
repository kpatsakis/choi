void fun()
{
  char entity_7[18] = "";
  char* entity_0;
  entity_0 = (char*)malloc(10*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'B', 18-1);
  entity_7[18-1]='0';
  strcpy(entity_0, entity_7);
}