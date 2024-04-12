void fun()
{
  int entity_8 = 33;
  char entity_0[25] = "";
  char* entity_2;
  memset(entity_0, 'r', 25-1);
  entity_0[25-1]='0';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_0, 25*sizeof(char));
}