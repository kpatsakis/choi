void fun()
{
  int entity_0 = 1;
  char entity_1[69] = "";
  char* entity_7;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 's', 69-1);
  entity_1[69-1]='0';
  memcpy(entity_7, entity_1, 69*sizeof(char));
}