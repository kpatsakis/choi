void fun()
{
  char* entity_3;
  char entity_2[99] = "";
  memset(entity_2, 'z', 99-1);
  entity_2[99-1]='0';
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_2, 99*sizeof(char));
}