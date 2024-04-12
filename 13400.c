void fun()
{
  int entity_7 = 24;
  entity_7 = 16;
  char entity_5[56] = "";
  char* entity_8;
  memset(entity_5, 'r', 56-1);
  entity_5[56-1]='0';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_5);
}