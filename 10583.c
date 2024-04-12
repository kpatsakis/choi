void fun()
{
  char* entity_1;
  char entity_4[4] = "";
  memset(entity_4, 'c', 4-1);
  entity_4[4-1]='0';
  entity_1 = (char*)malloc(17*sizeof(char));
  entity_1[0]='0';
  entity_4[54] = 'Z';
}