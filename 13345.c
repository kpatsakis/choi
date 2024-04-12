void fun()
{
  int entity_7 = 3;
  int entity_3 = 96;
  char entity_8[67] = "";
  char* entity_6;
  memset(entity_8, 'N', 67-1);
  entity_8[67-1]='0';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  entity_7 = 77;
  strcpy(entity_6, entity_8);
}