void fun()
{
  char entity_7 = 'M';
  char* entity_8;
  char entity_0[77] = "";
  char* entity_4;
  memset(entity_0, 'M', 77-1);
  entity_0[77-1]='0';
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[0]='0';
  entity_8 = (char*)malloc(95*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_4, entity_0, 77*sizeof(char));
}