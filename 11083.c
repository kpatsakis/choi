void fun()
{
  int entity_7 = 43;
  char entity_2[17] = "";
  char* entity_0;
  memset(entity_2, 'Y', 17-1);
  entity_2[17-1]='0';
  entity_0 = (char*)malloc(97*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_2, 17*sizeof(char));
}