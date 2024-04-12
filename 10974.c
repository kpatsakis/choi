void fun()
{
  char entity_3[98] = "";
  char* entity_6;
  memset(entity_3, 'G', 98-1);
  entity_3[98-1]='0';
  entity_6 = (char*)malloc(37*sizeof(char));
  entity_6[0]='0';
  entity_3[50] = 'g';
}