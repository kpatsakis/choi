void fun()
{
  int entity_5 = 20;
  char* entity_2;
  char entity_1[56] = "";
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'i', 56-1);
  entity_1[56-1]='0';
  memcpy(entity_2, entity_1, 56*sizeof(char));
}