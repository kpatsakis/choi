void fun()
{
  int entity_3 = 100;
  entity_3 = 19;
  char* entity_2;
  char entity_8[53] = "";
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'Z', 53-1);
  entity_8[53-1]='0';
  strcpy(entity_2, entity_8);
}