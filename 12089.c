void fun()
{
  int entity_5 = 66;
  int entity_7 = 82;
  char* entity_3;
  char entity_2[64] = "";
  memset(entity_2, 'Y', 64-1);
  entity_2[64-1]='0';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_2);
}