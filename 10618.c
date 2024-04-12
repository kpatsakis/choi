void fun()
{
  char entity_8[86] = "";
  char* entity_2;
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'L', 86-1);
  entity_8[86-1]='0';
  entity_8[48] = 'i';
}