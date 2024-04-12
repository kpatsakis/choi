void fun()
{
  char entity_4[22] = "";
  char* entity_3;
  entity_3 = (char*)malloc(85*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'v', 22-1);
  entity_4[22-1]='0';
  strcpy(entity_3, entity_4);
}