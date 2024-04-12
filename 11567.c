void fun()
{
  char* entity_0;
  char entity_5[67] = "";
  entity_0 = (char*)malloc(59*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'e', 67-1);
  entity_5[67-1]='0';
  memcpy(entity_0, entity_5, 67*sizeof(char));
}