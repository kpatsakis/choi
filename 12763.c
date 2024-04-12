void fun()
{
  int entity_3 = 67;
  char entity_0[48] = "";
  char* entity_2;
  memset(entity_0, 'u', 48-1);
  entity_0[48-1]='0';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_0);
}