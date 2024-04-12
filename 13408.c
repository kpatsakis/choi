void fun()
{
  int entity_2 = 65;
  char entity_8[34] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'y', 34-1);
  entity_8[34-1]='0';
  entity_2 = 24;
  strcpy(entity_6, entity_8);
}