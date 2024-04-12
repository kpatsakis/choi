void fun()
{
  char* entity_7;
  char entity_0[88] = "";
  memset(entity_0, 'T', 88-1);
  entity_0[88-1]='0';
  entity_7 = (char*)malloc(14*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_0, 88*sizeof(char));
}