void fun()
{
  char* entity_3;
  char entity_5[77] = "";
  entity_3 = (char*)malloc(67*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'z', 77-1);
  entity_5[77-1]='0';
  memcpy(entity_3, entity_5, 77*sizeof(char));
}