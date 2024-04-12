void fun()
{
  char entity_8 = 'Y';
  char entity_4[31] = "";
  char* entity_6;
  memset(entity_4, 'Z', 31-1);
  entity_4[31-1]='0';
  entity_6 = (char*)malloc(68*sizeof(char));
  entity_6[0]='0';
  entity_4[40] = 'C';
}