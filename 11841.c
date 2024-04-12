void fun()
{
  char entity_0[17] = "";
  char* entity_9;
  memset(entity_0, 'W', 17-1);
  entity_0[17-1]='0';
  entity_9 = (char*)malloc(26*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_0);
}