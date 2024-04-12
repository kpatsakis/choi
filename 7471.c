void fun()
{
  int entity_3 = 38;
  char* entity_2;
  char entity_5[18] = "";
  entity_5 = NULL;
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memset(entity_5, 'k', 18-1);
  entity_5[18-1]='';
  entity_3 = 25;
  memcpy(entity_2, entity_5, 18*sizeof(char));
}