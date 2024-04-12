void fun()
{
  int entity_7 = 18;
  char* entity_6;
  char entity_3[55] = "";
  char* entity_5;
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'O', 55-1);
  entity_3[55-1]='0';
  entity_5 = (char*)malloc(72*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_3, 55*sizeof(char));
}