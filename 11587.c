void fun()
{
  char* entity_2;
  char entity_0[16] = "";
  memset(entity_0, 'E', 16-1);
  entity_0[16-1]='0';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_0, 16*sizeof(char));
}