void fun()
{
  char entity_5[72] = "";
  char* entity_6;
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'b', 72-1);
  entity_5[72-1]='0';
  memcpy(entity_6, entity_5, 72*sizeof(char));
}