void fun()
{
  char* entity_6;
  char entity_1[69] = "";
  memset(entity_1, 't', 69-1);
  entity_1[69-1]='0';
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_1, 69*sizeof(char));
}