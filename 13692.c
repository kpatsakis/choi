void fun()
{
  int entity_8 = 10;
  entity_8 = 67;
  char* entity_2;
  char entity_5[57] = "";
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 'Q', 57-1);
  entity_5[57-1]='0';
  memcpy(entity_2, entity_5, 57*sizeof(char));
}