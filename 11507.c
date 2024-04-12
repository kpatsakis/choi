void fun()
{
  char entity_4 = 'G';
  char entity_1 = 'A';
  char* entity_0;
  char entity_5[10] = "";
  memset(entity_5, 'V', 10-1);
  entity_5[10-1]='0';
  entity_0 = (char*)malloc(42*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_5, 10*sizeof(char));
}