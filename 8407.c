void fun()
{
  int entity_8 = 33;
  char entity_5[42] = "";
  entity_5 = NULL;
  char* entity_4;
  memset(entity_5, 'r', 42-1);
  entity_5[42-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  entity_8 = 60;
  memcpy(entity_4, entity_5, 42*sizeof(char));
}