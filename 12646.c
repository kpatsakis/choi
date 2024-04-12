void fun()
{
  int entity_1 = 13;
  char entity_4[53] = "";
  char* entity_5;
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'z', 53-1);
  entity_4[53-1]='0';
  strcpy(entity_5, entity_4);
}