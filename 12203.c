void fun()
{
  int entity_4 = 22;
  char entity_5 = 'w';
  char entity_2[6] = "";
  char* entity_0;
  memset(entity_2, 'F', 6-1);
  entity_2[6-1]='0';
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_2);
}