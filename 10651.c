void fun()
{
  char entity_2[3] = "";
  char* entity_6;
  memset(entity_2, 'W', 3-1);
  entity_2[3-1]='0';
  entity_6 = (char*)malloc(7*sizeof(char));
  entity_6[0]='0';
  entity_2[64] = 's';
}