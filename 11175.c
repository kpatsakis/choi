void fun()
{
  char entity_0 = 'm';
  char entity_2[72] = "";
  char* entity_4;
  memset(entity_2, 'n', 72-1);
  entity_2[72-1]='0';
  entity_4 = (char*)malloc(99*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, 72*sizeof(char));
}