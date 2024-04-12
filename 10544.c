void fun()
{
  char entity_4[8] = "";
  char* entity_5;
  entity_5 = (char*)malloc(40*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 's', 8-1);
  entity_4[8-1]='0';
  entity_4[24] = 'V';
}