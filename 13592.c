void fun()
{
  int entity_4 = 49;
  entity_4 = 70;
  char entity_2[56] = "";
  char* entity_8;
  memset(entity_2, 'S', 56-1);
  entity_2[56-1]='0';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_2, 56*sizeof(char));
}