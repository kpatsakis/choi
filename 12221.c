void fun()
{
  int entity_4 = 1;
  char* entity_5;
  char entity_3[75] = "";
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'U', 75-1);
  entity_3[75-1]='0';
  memcpy(entity_5, entity_3, 75*sizeof(char));
}