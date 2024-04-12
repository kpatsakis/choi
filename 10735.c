void fun()
{
  char* entity_2;
  char entity_4[88] = "";
  memset(entity_4, 'E', 88-1);
  entity_4[88-1]='0';
  entity_2 = (char*)malloc(65*sizeof(char));
  entity_2[0]='0';
  entity_4[96] = 'D';
}