void fun()
{
  int entity_1 = 42;
  char entity_4[14] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'P', 14-1);
  entity_4[14-1]='0';
  strcpy(entity_3, entity_4);
}