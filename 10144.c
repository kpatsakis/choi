void fun()
{
  char entity_4[18] = "";
  char* entity_1;
  memset(entity_4, 'L', 18-1);
  entity_4[18-1]='0';
  entity_1 = (char*)malloc(7*sizeof(char));
  entity_1[0]='0';
  entity_4[2] = 'P';
}