void fun()
{
  int entity_2 = 82;
  char entity_4[17] = "";
  char* entity_3;
  entity_3 = (char*)malloc(64*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'e', 17-1);
  entity_4[17-1]='0';
  strcpy(entity_3, entity_4);
}