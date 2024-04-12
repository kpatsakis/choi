void fun()
{
  char entity_1[85] = "";
  char* entity_0;
  entity_0 = (char*)malloc(88*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'v', 85-1);
  entity_1[85-1]='0';
  entity_1[67] = 'a';
}