void fun()
{
  char* entity_3;
  char entity_9 = 'v';
  char entity_8[53] = "";
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'v', 53-1);
  entity_8[53-1]='0';
  entity_8[2] = 'P';
}