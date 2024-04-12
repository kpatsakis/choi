void fun()
{
  int entity_0 = 70;
  char* entity_4;
  char entity_5[49] = "";
  memset(entity_5, 'Y', 49-1);
  entity_5[49-1]='0';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_5);
}