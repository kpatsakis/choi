void fun()
{
  char* entity_4;
  char entity_3[20] = "";
  memset(entity_3, 'k', 20-1);
  entity_3[20-1]='0';
  entity_4 = (char*)malloc(71*sizeof(char));
  entity_4[0]='0';
  entity_3[99] = 'F';
}