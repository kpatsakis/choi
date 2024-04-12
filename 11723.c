void fun()
{
  char* entity_4;
  char entity_0[69] = "";
  memset(entity_0, 's', 69-1);
  entity_0[69-1]='0';
  entity_4 = (char*)malloc(85*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_0, 69*sizeof(char));
}