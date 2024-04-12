void fun()
{
  int entity_6 = 63;
  char entity_2[67] = "";
  char* entity_8;
  memset(entity_2, 'K', 67-1);
  entity_2[67-1]='0';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_2);
}