void fun()
{
  char* entity_4;
  char entity_3[77] = "";
  memset(entity_3, 'r', 77-1);
  entity_3[77-1]='0';
  entity_4 = (char*)malloc(1*sizeof(char));
  entity_4[0]='0';
  entity_3[51] = 't';
}