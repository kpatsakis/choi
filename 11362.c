void fun()
{
  int entity_3 = 50;
  char entity_8[82] = "";
  char* entity_0;
  memset(entity_8, 'Q', 82-1);
  entity_8[82-1]='0';
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, 82*sizeof(char));
}