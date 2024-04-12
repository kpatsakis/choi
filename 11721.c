void fun()
{
  char* entity_0;
  char entity_5[85] = "";
  memset(entity_5, 'Z', 85-1);
  entity_5[85-1]='0';
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_5, 85*sizeof(char));
}