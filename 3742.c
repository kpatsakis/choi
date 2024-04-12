void fun()
{
  int entity_8 = 60;
  int entity_2 = 4;
  int entity_4 = 73;
  char* entity_5;
  char entity_3[55] = "";
  entity_3 = NULL;
  memset(entity_3, 'o', 55-1);
  entity_3[55-1]='';
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[88-1]='';
  memcpy(entity_5, entity_3, 55*sizeof(char));
}