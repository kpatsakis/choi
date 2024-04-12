void fun()
{
  int entity_5 = 44;
  char entity_8[60] = "";
  char* entity_2;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'x', 60-1);
  entity_8[60-1]='0';
  entity_5 = 60;
  strcpy(entity_2, entity_8);
}