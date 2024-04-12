void fun()
{
  int entity_2 = 1;
  char entity_0[40] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'I', 40-1);
  entity_0[40-1]='0';
  memcpy(entity_3, entity_0, 40*sizeof(char));
}