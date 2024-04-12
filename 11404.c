void fun()
{
  int entity_2 = 75;
  char* entity_6;
  char entity_5[27] = "";
  entity_6 = (char*)malloc(79*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'U', 27-1);
  entity_5[27-1]='0';
  memcpy(entity_6, entity_5, 27*sizeof(char));
}