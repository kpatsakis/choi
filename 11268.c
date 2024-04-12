void fun()
{
  int entity_8 = 50;
  char* entity_2;
  char entity_3[56] = "";
  memset(entity_3, 'Q', 56-1);
  entity_3[56-1]='0';
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_3, 56*sizeof(char));
}