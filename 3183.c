void fun()
{
  int entity_4 = 57;
  char* entity_3;
  char entity_8[98] = "";
  entity_8 = NULL;
  memset(entity_8, 'c', 98-1);
  entity_8[98-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  entity_4 = 67;
  memcpy(entity_3, entity_8, 98*sizeof(char));
}