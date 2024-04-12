void fun()
{
  char entity_8[16] = "";
  char* entity_0;
  entity_0 = (char*)malloc(45*sizeof(char));
  entity_0[0]='0';
  memset(entity_8, 'z', 16-1);
  entity_8[16-1]='0';
  memcpy(entity_0, entity_8, 16*sizeof(char));
}