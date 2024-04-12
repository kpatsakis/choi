void fun()
{
  int entity_2 = 3;
  entity_2 = 1;
  char* entity_8;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(7*sizeof(char));
  entity_8[7-1]='';
  memset(entity_3, 'B', entity_2-1);
  entity_3[entity_2-1]='';
  memcpy(entity_8, entity_3, entity_2*sizeof(char));
}