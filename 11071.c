void fun()
{
  int entity_6 = 39;
  char entity_1[24] = "";
  char* entity_2;
  char entity_3 = 'c';
  char entity_5[94] = "";
  memset(entity_1, 'Q', 24-1);
  entity_1[24-1]='0';
  memset(entity_5, 'x', 94-1);
  entity_5[94-1]='0';
  entity_2 = (char*)malloc(54*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_5);
}