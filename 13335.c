void fun()
{
  int entity_5 = 26;
  entity_5 = 17;
  char entity_2[7] = "";
  char* entity_4;
  memset(entity_2, 'Q', 7-1);
  entity_2[7-1]='0';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_2);
}