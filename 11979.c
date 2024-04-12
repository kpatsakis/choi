void fun()
{
  char entity_5[92] = "";
  char* entity_8;
  memset(entity_5, 'U', 92-1);
  entity_5[92-1]='0';
  entity_8 = (char*)malloc(74*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_5);
}