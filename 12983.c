void fun()
{
  int entity_3 = 40;
  char entity_8[8] = "";
  char* entity_2;
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'S', 8-1);
  entity_8[8-1]='0';
  memcpy(entity_2, entity_8, 8*sizeof(char));
}