void fun()
{
  int entity_4 = 21;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'g', entity_4-1);
  entity_2[entity_4-1]='';
  entity_3 = (char*)malloc(42*sizeof(char));
  entity_3[42-1]='';
  memcpy(entity_3, entity_2, entity_4*sizeof(char));
}