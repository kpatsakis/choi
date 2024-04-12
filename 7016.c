void fun()
{
  int entity_1 = 14;
  char entity_2[55] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'L', 55-1);
  entity_2[55-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memcpy(entity_3, entity_2, 55*sizeof(char));
}