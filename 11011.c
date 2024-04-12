void fun()
{
  int entity_2 = 6;
  char entity_8[96] = "";
  char* entity_5;
  entity_5 = (char*)malloc(93*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'u', 96-1);
  entity_8[96-1]='0';
  strcpy(entity_5, entity_8);
}