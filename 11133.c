void fun()
{
  char* entity_4;
  char entity_8[95] = "";
  entity_4 = (char*)malloc(14*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'I', 95-1);
  entity_8[95-1]='0';
  strcpy(entity_4, entity_8);
}