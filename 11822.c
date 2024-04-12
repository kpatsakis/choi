void fun()
{
  char entity_7[83] = "";
  char* entity_5;
  memset(entity_7, 'u', 83-1);
  entity_7[83-1]='0';
  entity_5 = (char*)malloc(72*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_7, 83*sizeof(char));
}