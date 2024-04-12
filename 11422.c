void fun()
{
  char entity_4[83] = "";
  char* entity_3;
  memset(entity_4, 'w', 83-1);
  entity_4[83-1]='0';
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_4, 83*sizeof(char));
}