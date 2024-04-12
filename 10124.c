void fun()
{
  char* entity_9;
  char entity_4[35] = "";
  memset(entity_4, 'X', 35-1);
  entity_4[35-1]='0';
  entity_9 = (char*)malloc(99*sizeof(char));
  entity_9[0]='0';
  entity_4[53] = 'M';
}