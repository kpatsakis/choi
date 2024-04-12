void fun()
{
  int entity_8 = 65;
  char entity_5[38] = "";
  char* entity_2;
  memset(entity_5, 'B', 38-1);
  entity_5[38-1]='0';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_5, 38*sizeof(char));
}