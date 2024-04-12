void fun()
{
  char* entity_2;
  char entity_9 = 's';
  char entity_0[51] = "";
  char entity_5[45] = "";
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 't', 45-1);
  entity_5[45-1]='0';
  memset(entity_0, 'a', 51-1);
  entity_0[51-1]='0';
  memcpy(entity_2, entity_0, 51*sizeof(char));
}