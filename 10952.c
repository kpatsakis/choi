void fun()
{
  char* entity_8;
  char entity_4[14] = "";
  char* entity_1;
  entity_8 = (char*)malloc(77*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'z', 14-1);
  entity_4[14-1]='0';
  entity_1 = (char*)malloc(71*sizeof(char));
  entity_1[0]='0';
  entity_4[16] = 'Y';
}