void fun()
{
  char* entity_5;
  char entity_8[67] = "";
  char entity_0[16] = "";
  char entity_9 = 'c';
  memset(entity_0, 'o', 16-1);
  entity_0[16-1]='0';
  memset(entity_8, 'i', 67-1);
  entity_8[67-1]='0';
  entity_5 = (char*)malloc(65*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_0, 16*sizeof(char));
}