void fun()
{
  int entity_3 = 38;
  char entity_0[76] = "";
  char* entity_2;
  memset(entity_0, 'w', 76-1);
  entity_0[76-1]='0';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  entity_3 = 45;
  strcpy(entity_2, entity_0);
}