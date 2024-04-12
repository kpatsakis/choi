void fun()
{
  int entity_5 = 6;
  char* entity_6;
  char entity_3[61] = "";
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'I', 61-1);
  entity_3[61-1]='0';
  strcpy(entity_6, entity_3);
}