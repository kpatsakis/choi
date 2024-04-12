void fun()
{
  char entity_1[86] = "";
  char* entity_6;
  entity_6 = (char*)malloc(60*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'M', 86-1);
  entity_1[86-1]='0';
  entity_1[21] = 'V';
}