void fun()
{
  char* entity_8;
  char entity_7 = 'T';
  char entity_4[82] = "";
  entity_8 = (char*)malloc(59*sizeof(char));
  entity_8[0]='0';
  memset(entity_4, 'h', 82-1);
  entity_4[82-1]='0';
  strcpy(entity_8, entity_4);
}