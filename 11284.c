void fun()
{
  char* entity_1;
  char entity_2[16] = "";
  entity_1 = (char*)malloc(24*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'f', 16-1);
  entity_2[16-1]='0';
  memcpy(entity_1, entity_2, 16*sizeof(char));
}