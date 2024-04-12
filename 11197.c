void fun()
{
  char entity_4[52] = "";
  char* entity_3;
  entity_3 = (char*)malloc(42*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'i', 52-1);
  entity_4[52-1]='0';
  memcpy(entity_3, entity_4, 52*sizeof(char));
}