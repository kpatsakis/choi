void fun()
{
  char entity_4[76] = "";
  char* entity_2;
  entity_2 = (char*)malloc(77*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'N', 76-1);
  entity_4[76-1]='0';
  memcpy(entity_2, entity_4, 76*sizeof(char));
}