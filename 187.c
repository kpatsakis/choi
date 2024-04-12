void fun()
{
  int entity_2 = 1;
  entity_2 = 71;
  char entity_1 = 'J';
  char entity_8[24] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_8, 'w', 24-1);
  entity_8[24-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memcpy(entity_7, entity_8, 24*sizeof(char));
}