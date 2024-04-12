void fun()
{
  int entity_2 = 27;
  char* entity_0;
  char entity_4[69] = "";
  memset(entity_4, 'n', 69-1);
  entity_4[69-1]='0';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_4, 69*sizeof(char));
}