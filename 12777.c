void fun()
{
  int entity_7 = 32;
  char entity_6 = 'e';
  char* entity_1;
  char entity_3[77] = "";
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'A', 77-1);
  entity_3[77-1]='0';
  memcpy(entity_1, entity_3, 77*sizeof(char));
}