void fun()
{
  int entity_2 = 84;
  char entity_8[84] = "";
  char* entity_3;
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'z', 84-1);
  entity_8[84-1]='0';
  strcpy(entity_3, entity_8);
}