void fun()
{
  int entity_6 = 56;
  int entity_5 = 69;
  char* entity_3;
  char entity_8[27] = "";
  memset(entity_8, 'X', 27-1);
  entity_8[27-1]='0';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_8);
}