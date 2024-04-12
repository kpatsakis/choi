void fun()
{
  int entity_5 = 2;
  char entity_3[23] = "";
  char* entity_4;
  memset(entity_3, 'F', 23-1);
  entity_3[23-1]='0';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_3, 23*sizeof(char));
}