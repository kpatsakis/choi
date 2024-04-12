void fun()
{
  char* entity_1;
  char entity_7[11] = "";
  entity_1 = (char*)malloc(83*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'b', 11-1);
  entity_7[11-1]='0';
  memcpy(entity_1, entity_7, 11*sizeof(char));
}