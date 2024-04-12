void fun()
{
  int entity_8 = 79;
  char entity_5[56] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'c', 56-1);
  entity_5[56-1]='0';
  strcpy(entity_6, entity_5);
}