void fun()
{
  char* entity_4;
  char entity_2[17] = "";
  memset(entity_2, 'G', 17-1);
  entity_2[17-1]='0';
  entity_4 = (char*)malloc(75*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, 17*sizeof(char));
}