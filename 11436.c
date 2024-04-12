void fun()
{
  char* entity_4;
  char entity_2[47] = "";
  entity_4 = (char*)malloc(80*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'v', 47-1);
  entity_2[47-1]='0';
  memcpy(entity_4, entity_2, 47*sizeof(char));
}