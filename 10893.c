void fun()
{
  char* entity_0;
  char entity_5[73] = "";
  char entity_9[5] = "";
  memset(entity_5, 'o', 73-1);
  entity_5[73-1]='0';
  memset(entity_9, 't', 5-1);
  entity_9[5-1]='0';
  entity_0 = (char*)malloc(14*sizeof(char));
  entity_0[0]='0';
  entity_5[79] = 'p';
}