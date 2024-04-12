void fun()
{
  char* entity_4;
  char entity_3[31] = "";
  entity_4 = (char*)malloc(93*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 's', 31-1);
  entity_3[31-1]='0';
  memcpy(entity_4, entity_3, 31*sizeof(char));
}