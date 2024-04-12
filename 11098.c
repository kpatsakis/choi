void fun()
{
  char* entity_2;
  char entity_7[99] = "";
  char entity_1[32] = "";
  memset(entity_7, 'Q', 99-1);
  entity_7[99-1]='0';
  memset(entity_1, 'd', 32-1);
  entity_1[32-1]='0';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_1, 32*sizeof(char));
}