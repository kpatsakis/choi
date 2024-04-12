void fun()
{
  char* entity_2;
  char entity_1[10] = "";
  memset(entity_1, 'X', 10-1);
  entity_1[10-1]='0';
  entity_2 = (char*)malloc(54*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_1, 10*sizeof(char));
}