void fun()
{
  int entity_0 = 4;
  char entity_6[13] = "";
  char* entity_2;
  entity_2 = (char*)malloc(15*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'k', 13-1);
  entity_6[13-1]='0';
  memcpy(entity_2, entity_6, 13*sizeof(char));
}