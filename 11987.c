void fun()
{
  char entity_2[22] = "";
  char* entity_8;
  entity_8 = (char*)malloc(96*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'u', 22-1);
  entity_2[22-1]='0';
  strcpy(entity_8, entity_2);
}