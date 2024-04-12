void fun()
{
  char* entity_5;
  char entity_4[73] = "";
  char entity_2 = 'M';
  memset(entity_4, 'T', 73-1);
  entity_4[73-1]='0';
  entity_5 = (char*)malloc(4*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_4, 73*sizeof(char));
}