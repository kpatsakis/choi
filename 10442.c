void fun()
{
  char entity_5[54] = "";
  char* entity_4;
  entity_4 = (char*)malloc(60*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'b', 54-1);
  entity_5[54-1]='0';
  entity_5[46] = 'I';
}