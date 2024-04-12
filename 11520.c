void fun()
{
  char entity_0[3] = "";
  char* entity_1;
  entity_1 = (char*)malloc(62*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'v', 3-1);
  entity_0[3-1]='0';
  strcpy(entity_1, entity_0);
}