void fun()
{
  int entity_4 = 41;
  char* entity_2;
  char entity_1[92] = "";
  memset(entity_1, 'P', 92-1);
  entity_1[92-1]='0';
  entity_2 = (char*)malloc(43*sizeof(char));
  entity_2[0]='0';
  entity_1[90] = 's';
}