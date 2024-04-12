void fun()
{
  char entity_0[67] = "";
  char* entity_8;
  entity_8 = (char*)malloc(73*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'b', 67-1);
  entity_0[67-1]='0';
  strcpy(entity_8, entity_0);
}