void fun()
{
  int entity_5 = 19;
  char entity_1 = 'u';
  char entity_2[72] = "";
  char* entity_0;
  memset(entity_2, 'o', 72-1);
  entity_2[72-1]='0';
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_2);
}