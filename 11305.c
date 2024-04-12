void fun()
{
  char entity_4[80] = "";
  char* entity_7;
  entity_7 = (char*)malloc(14*sizeof(char));
  entity_7[0]='0';
  memset(entity_4, 'M', 80-1);
  entity_4[80-1]='0';
  memcpy(entity_7, entity_4, 80*sizeof(char));
}