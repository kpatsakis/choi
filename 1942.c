void fun()
{
  int entity_2 = 55;
  entity_2 = 84;
  char* entity_5;
  char entity_8[42] = "";
  entity_8 = NULL;
  memset(entity_8, 'O', 42-1);
  entity_8[42-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memcpy(entity_5, entity_8, 42*sizeof(char));
}