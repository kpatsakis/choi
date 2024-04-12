void fun()
{
  int entity_3 = 32;
  entity_3 = 86;
  char* entity_6;
  char entity_2[13] = "";
  memset(entity_2, 'a', 13-1);
  entity_2[13-1]='0';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_2, 13*sizeof(char));
}