void fun()
{
  char* entity_3;
  char entity_0[47] = "";
  memset(entity_0, 'm', 47-1);
  entity_0[47-1]='0';
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_0, 47*sizeof(char));
}