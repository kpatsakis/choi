void fun()
{
  char entity_2[64] = "";
  char* entity_1;
  entity_1 = (char*)malloc(42*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'n', 64-1);
  entity_2[64-1]='0';
  memcpy(entity_1, entity_2, 64*sizeof(char));
}