void fun()
{
  char* entity_3;
  char entity_0[72] = "";
  entity_3 = (char*)malloc(99*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'O', 72-1);
  entity_0[72-1]='0';
  memcpy(entity_3, entity_0, 72*sizeof(char));
}