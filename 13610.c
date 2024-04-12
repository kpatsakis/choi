void fun()
{
  int entity_0 = 38;
  char* entity_3;
  char entity_5[37] = "";
  memset(entity_5, 'y', 37-1);
  entity_5[37-1]='0';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[0]='0';
  entity_0 = 59;
  memcpy(entity_3, entity_5, 37*sizeof(char));
}