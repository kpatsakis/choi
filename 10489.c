void fun()
{
  char* entity_5;
  char entity_3[70] = "";
  char entity_4[31] = "";
  memset(entity_4, 'D', 31-1);
  entity_4[31-1]='0';
  memset(entity_3, 'T', 70-1);
  entity_3[70-1]='0';
  entity_5 = (char*)malloc(68*sizeof(char));
  entity_5[0]='0';
  entity_3[31] = 'h';
}