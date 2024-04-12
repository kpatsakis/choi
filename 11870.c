void fun()
{
  char* entity_2;
  char entity_0[83] = "";
  entity_2 = (char*)malloc(54*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 't', 83-1);
  entity_0[83-1]='0';
  memcpy(entity_2, entity_0, 83*sizeof(char));
}