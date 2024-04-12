void fun()
{
  char entity_8[93] = "";
  char entity_5 = 'x';
  char* entity_6;
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'u', 93-1);
  entity_8[93-1]='0';
  memcpy(entity_6, entity_8, 93*sizeof(char));
}