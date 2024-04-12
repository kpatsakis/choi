void fun()
{
  char entity_3[2] = "";
  char* entity_8;
  entity_8 = (char*)malloc(14*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'v', 2-1);
  entity_3[2-1]='0';
  strcpy(entity_8, entity_3);
}