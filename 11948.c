void fun()
{
  char* entity_5;
  char entity_6[65] = "";
  memset(entity_6, 'C', 65-1);
  entity_6[65-1]='0';
  entity_5 = (char*)malloc(50*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_6, 65*sizeof(char));
}