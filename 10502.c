void fun()
{
  char* entity_5;
  char entity_7 = 'D';
  char entity_2[59] = "";
  entity_5 = (char*)malloc(32*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'h', 59-1);
  entity_2[59-1]='0';
  entity_2[100] = 'b';
}