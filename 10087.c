void fun()
{
  char* entity_5;
  char entity_6[12] = "";
  memset(entity_6, 'b', 12-1);
  entity_6[12-1]='0';
  entity_5 = (char*)malloc(68*sizeof(char));
  entity_5[0]='0';
  entity_6[87] = 'b';
}