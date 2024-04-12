void fun()
{
  int entity_7 = 100;
  entity_7 = 61;
  char entity_3[51] = "";
  char* entity_8;
  memset(entity_3, 'L', 51-1);
  entity_3[51-1]='0';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_3);
}