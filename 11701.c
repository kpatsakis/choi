void fun()
{
  char* entity_6;
  char entity_2[49] = "";
  char entity_7[42] = "";
  memset(entity_7, 'd', 42-1);
  entity_7[42-1]='0';
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'X', 49-1);
  entity_2[49-1]='0';
  memcpy(entity_6, entity_7, 42*sizeof(char));
}