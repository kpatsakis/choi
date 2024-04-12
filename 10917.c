void fun()
{
  char entity_9[12] = "";
  char* entity_4;
  entity_4 = (char*)malloc(13*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'x', 12-1);
  entity_9[12-1]='0';
  entity_9[23] = 'n';
}