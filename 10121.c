void fun()
{
  char entity_3[86] = "";
  char* entity_4;
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'o', 86-1);
  entity_3[86-1]='0';
  entity_3[25] = 'M';
}