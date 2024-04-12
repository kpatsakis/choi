void fun()
{
  char entity_7[69] = "";
  char* entity_6;
  memset(entity_7, 'N', 69-1);
  entity_7[69-1]='0';
  entity_6 = (char*)malloc(80*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_7, 69*sizeof(char));
}