void fun()
{
  char* entity_5;
  char entity_6[69] = "";
  entity_5 = (char*)malloc(42*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'W', 69-1);
  entity_6[69-1]='0';
  memcpy(entity_5, entity_6, 69*sizeof(char));
}