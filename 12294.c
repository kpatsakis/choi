void fun()
{
  int entity_8 = 17;
  char* entity_5;
  char entity_3 = 'Y';
  char entity_9[53] = "";
  memset(entity_9, 'G', 53-1);
  entity_9[53-1]='0';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_9);
}