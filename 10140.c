void fun()
{
  char entity_3[80] = "";
  char* entity_6;
  entity_6 = (char*)malloc(25*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'P', 80-1);
  entity_3[80-1]='0';
  entity_3[28] = 'l';
}