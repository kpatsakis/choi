void fun()
{
  char entity_1[9] = "";
  char* entity_2;
  char entity_4 = 'r';
  entity_2 = (char*)malloc(79*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'A', 9-1);
  entity_1[9-1]='0';
  memcpy(entity_2, entity_1, 9*sizeof(char));
}