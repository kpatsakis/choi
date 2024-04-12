void fun()
{
  char entity_9[34] = "";
  char* entity_2;
  char entity_0[90] = "";
  memset(entity_9, 'b', 34-1);
  entity_9[34-1]='0';
  memset(entity_0, 'W', 90-1);
  entity_0[90-1]='0';
  entity_2 = (char*)malloc(17*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_9);
}