void fun()
{
  char entity_6 = 'r';
  char* entity_0;
  char entity_2[41] = "";
  memset(entity_2, 'Q', 41-1);
  entity_2[41-1]='0';
  entity_0 = (char*)malloc(65*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_2, 41*sizeof(char));
}