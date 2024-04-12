void fun()
{
  int entity_0 = 19;
  char* entity_5;
  char entity_2[42] = "";
  entity_2 = NULL;
  memset(entity_2, 'v', 42-1);
  entity_2[42-1]='';
  entity_5 = (char*)malloc(98*sizeof(char));
  entity_5[98-1]='';
  memcpy(entity_5, entity_2, 42*sizeof(char));
}