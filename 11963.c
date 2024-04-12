void fun()
{
  char* entity_5;
  char entity_4[34] = "";
  memset(entity_4, 'm', 34-1);
  entity_4[34-1]='0';
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_4, 34*sizeof(char));
}