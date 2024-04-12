void fun()
{
  int entity_6 = 24;
  char* entity_2;
  char entity_4[55] = "";
  memset(entity_4, 'O', 55-1);
  entity_4[55-1]='0';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  entity_6 = 20;
  memcpy(entity_2, entity_4, 55*sizeof(char));
}