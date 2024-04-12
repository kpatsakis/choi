void fun()
{
  char entity_1[27] = "";
  char* entity_8;
  char entity_2[52] = "";
  entity_8 = (char*)malloc(99*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'w', 52-1);
  entity_2[52-1]='0';
  memset(entity_1, 'q', 27-1);
  entity_1[27-1]='0';
  memcpy(entity_8, entity_1, 27*sizeof(char));
}