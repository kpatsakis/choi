void fun()
{
  char entity_7[22] = "";
  char* entity_8;
  memset(entity_7, 'Q', 22-1);
  entity_7[22-1]='0';
  entity_8 = (char*)malloc(16*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_7, 22*sizeof(char));
}