void fun()
{
  char entity_7[42] = "";
  char* entity_8;
  entity_8 = (char*)malloc(8*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'w', 42-1);
  entity_7[42-1]='0';
  memcpy(entity_8, entity_7, 42*sizeof(char));
}