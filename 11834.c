void fun()
{
  char entity_3[42] = "";
  char* entity_7;
  entity_7 = (char*)malloc(81*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'f', 42-1);
  entity_3[42-1]='0';
  memcpy(entity_7, entity_3, 42*sizeof(char));
}