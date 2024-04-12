void fun()
{
  char entity_3[5] = "";
  char* entity_5;
  memset(entity_3, 't', 5-1);
  entity_3[5-1]='0';
  entity_5 = (char*)malloc(74*sizeof(char));
  entity_5[0]='0';
  entity_3[40] = 'O';
}